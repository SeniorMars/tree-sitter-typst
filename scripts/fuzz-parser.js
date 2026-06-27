#!/usr/bin/env node
import assert from "node:assert";
import { writeFileSync } from "node:fs";
import Parser from "tree-sitter";

const { default: language } = await import("../bindings/node/index.js");

const args = new Map();
for (let i = 2; i < process.argv.length; i += 1) {
  const arg = process.argv[i];
  if (!arg.startsWith("--")) {
    throw new Error(`unexpected argument: ${arg}`);
  }
  const name = arg.slice(2);
  const next = process.argv[i + 1];
  if (next && !next.startsWith("--")) {
    args.set(name, next);
    i += 1;
  } else {
    args.set(name, "true");
  }
}

const iterations = Number(args.get("iterations") ?? 1000);
const maxLength = Number(args.get("max-length") ?? 1200);
const includeErrorRecovery = args.has("include-error-recovery");
const checkIncremental = args.has("check-incremental");
const debugFailure = args.get("debug-failure");
let seed = Number(args.get("seed") ?? 0x54595053);

function random() {
  seed |= 0;
  seed = (seed + 0x6D2B79F5) | 0;
  let value = Math.imul(seed ^ (seed >>> 15), 1 | seed);
  value ^= value + Math.imul(value ^ (value >>> 7), 61 | value);
  return ((value ^ (value >>> 14)) >>> 0) / 4294967296;
}

function integer(max) {
  return Math.floor(random() * max);
}

function choice(values) {
  return values[integer(values.length)];
}

const atoms = [
  "text", "alpha", "한글", "漢字", "x", "value", "1", "12pt", "0xff",
  "*strong*", "_emph_", "`raw`", "https://typst.app/a_(b)[c]",
  "@ref", "<label>", "\\#", "---", "$x$", "$ a + b $",
  "#let x = 1", "#f(1, named: value)", "#(x,)", "#(: key: value)",
  "#{ let x = 1\nx }", "#[content]", "$f(size: #12pt, ..#args)$",
  "- item", "+ item", "/ Term: body", "= Heading",
];

const openers = [
  ["[", "]"],
  ["#{", "}"],
  ["#(", ")"],
  ["$(", ")$"],
  ["$[", "]$"],
  ["*", "*"],
  ["_", "_"],
  ["`", "`"],
  ["```typ\n", "\n```"],
];

function generatedSource(depth = 0) {
  if (depth > 4 || random() < 0.45) {
    return choice(atoms);
  }

  if (random() < 0.35) {
    const [open, close] = choice(openers);
    return open + generatedSource(depth + 1) + close;
  }

  if (random() < 0.35) {
    return [
      "- " + generatedSource(depth + 1),
      "  " + generatedSource(depth + 1),
    ].join("\n");
  }

  return Array.from({ length: 1 + integer(5) }, () => generatedSource(depth + 1)).join(
    choice([" ", "\n", "\n\n", "; "]),
  );
}

function pointAt(text, index) {
  const prefix = text.slice(0, index);
  const lines = prefix.split("\n");
  return { row: lines.length - 1, column: lines.at(-1).length };
}

function mutate(text) {
  const edits = [
    () => {
      const index = integer(text.length + 1);
      const insert = choice(["x", " ", "\n", ")", "]", "}", "$", "#", "/* */", "`"]);
      return { index, oldText: "", newText: insert };
    },
    () => {
      if (text.length === 0) return { index: 0, oldText: "", newText: "x" };
      const index = integer(text.length);
      const size = Math.min(text.length - index, 1 + integer(8));
      return { index, oldText: text.slice(index, index + size), newText: "" };
    },
    () => {
      if (text.length === 0) return { index: 0, oldText: "", newText: "#x" };
      const index = integer(text.length);
      const size = Math.min(text.length - index, 1 + integer(6));
      return {
        index,
        oldText: text.slice(index, index + size),
        newText: choice(atoms),
      };
    },
  ];
  return choice(edits)();
}

function applyEdit(text, tree, edit) {
  const after =
    text.slice(0, edit.index) +
    edit.newText +
    text.slice(edit.index + edit.oldText.length);

  tree.edit({
    startIndex: edit.index,
    oldEndIndex: edit.index + edit.oldText.length,
    newEndIndex: edit.index + edit.newText.length,
    startPosition: pointAt(text, edit.index),
    oldEndPosition: pointAt(text, edit.index + edit.oldText.length),
    newEndPosition: pointAt(after, edit.index + edit.newText.length),
  });

  return { after, tree: parser.parse(after, tree) };
}

const parser = new Parser();
parser.setLanguage(language);
let recoverySkipped = 0;
let incrementalMismatches = 0;

for (let i = 0; i < iterations; i += 1) {
  let source = generatedSource();
  if (source.length > maxLength) source = source.slice(0, maxLength);

  const clean = parser.parse(source);
  const cleanHadError = clean.rootNode.hasError || clean.rootNode.type !== "source_file";

  const edit = mutate(source);
  const { after, tree } = applyEdit(source, clean, edit);
  const reparsed = parser.parse(after);
  if (
    !includeErrorRecovery &&
    (
      cleanHadError ||
      tree.rootNode.hasError ||
      reparsed.rootNode.hasError ||
      tree.rootNode.type !== "source_file" ||
      reparsed.rootNode.type !== "source_file"
    )
  ) {
    recoverySkipped += 1;
    continue;
  }
  assert.equal(tree.rootNode.type, "source_file");
  assert.equal(reparsed.rootNode.type, "source_file");
  if (!checkIncremental) {
    if (tree.rootNode.toString() !== reparsed.rootNode.toString()) {
      incrementalMismatches += 1;
    }
    continue;
  }
  assert.strictEqual(
    tree.rootNode.toString(),
    reparsed.rootNode.toString(),
    (() => {
      if (debugFailure) {
        writeFileSync(`${debugFailure}.before.typ`, source);
        writeFileSync(`${debugFailure}.after.typ`, after);
        writeFileSync(`${debugFailure}.incremental.txt`, tree.rootNode.toString());
        writeFileSync(`${debugFailure}.clean.txt`, reparsed.rootNode.toString());
        writeFileSync(`${debugFailure}.json`, JSON.stringify({ iteration: i, seed, edit }, null, 2));
      }
      return `incremental mismatch at iteration ${i}, seed ${seed}\n${JSON.stringify({ source, edit, after }, null, 2)}`;
    })(),
  );
}

const skippedMessage = recoverySkipped
  ? `, skipped ${recoverySkipped} malformed recovery convergence checks`
  : "";
const mismatchMessage = incrementalMismatches
  ? `, observed ${incrementalMismatches} non-gated clean incremental mismatches`
  : "";
console.log(`fuzz parser tests passed (${iterations} iterations, seed ${seed >>> 0}${skippedMessage}${mismatchMessage})`);
