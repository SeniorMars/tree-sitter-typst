#!/usr/bin/env node
import assert from "node:assert";
import {writeFileSync} from "node:fs";
import Parser from "tree-sitter";

import {treeHasSyntaxIssue} from "./syntax-issues.js";

const {default: language} = await import("../bindings/node/index.js");

const valueOptions = new Set([
  "case-seed",
  "debug-failure",
  "iterations",
  "max-length",
  "mutation-kind",
  "seed",
]);
const flagOptions = new Set([
  "check-incremental",
  "include-error-recovery",
]);
const args = new Map();
for (let i = 2; i < process.argv.length; i += 1) {
  const arg = process.argv[i];
  if (!arg.startsWith("--")) {
    throw new Error(`unexpected argument: ${arg}`);
  }

  const name = arg.slice(2);
  if (!valueOptions.has(name) && !flagOptions.has(name)) {
    throw new Error(`unknown option: --${name}`);
  }
  if (flagOptions.has(name)) {
    args.set(name, true);
    continue;
  }

  const value = process.argv[++i];
  if (value === undefined || value.startsWith("--")) {
    throw new Error(`--${name} requires a value`);
  }
  args.set(name, value);
}

const singleCase = args.has("case-seed");
const iterations = singleCase ? 1 : Number(args.get("iterations") ?? 1000);
const maxLength = Number(args.get("max-length") ?? 1200);
const includeErrorRecovery = args.has("include-error-recovery");
const checkIncremental = args.has("check-incremental");
const debugFailure = args.get("debug-failure");
const requestedMutationKind = args.get("mutation-kind");
let seed = Number(args.get("case-seed") ?? args.get("seed") ?? 0x54595053);
const initialSeed = seed >>> 0;

if (!Number.isInteger(iterations) || iterations <= 0) {
  throw new Error(`--iterations must be a positive integer: ${iterations}`);
}
if (!Number.isInteger(maxLength) || maxLength <= 0) {
  throw new Error(`--max-length must be a positive integer: ${maxLength}`);
}
if (!Number.isFinite(seed)) {
  throw new Error(`seed must be numeric: ${seed}`);
}

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
  "text",
  "alpha",
  "한글",
  "漢字",
  "emoji 😀",
  "x",
  "value",
  "1",
  "12pt",
  "0xff",
  "*strong*",
  "_emph_",
  "`raw`",
  "https://typst.app/a_(b)[c]",
  "@ref",
  "<label>",
  "\\#",
  "---",
  "$x$",
  "$ a + b $",
  "#let x = 1",
  "#f(1, named: value)",
  "#(x,)",
  "#(: key: value)",
  "#{ let x = 1\nx }",
  "#[content]",
  "$f(size: #12pt, ..#args)$",
  "- item",
  "+ item",
  "/ Term: body",
  "= Heading",
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

const separators = [
  " ",
  "\n",
  "\n\n",
  "\r",
  "\r\n",
  "\v",
  "\f",
  "\u0085",
  "\u2028",
  "\u2029",
  "; ",
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
    ].join(choice(["\n", "\r\n", "\u2028"]));
  }

  return Array.from(
    {length: 1 + integer(5)},
    () => generatedSource(depth + 1),
  ).join(choice(separators));
}

// node-tree-sitter indices and columns are UTF-16 code units. Tree-sitter
// points count only LF as a row break, even when the grammar treats other
// Unicode characters as syntax-level newlines.
function pointAt(text, index) {
  const prefix = text.slice(0, index);
  const lines = prefix.split("\n");
  return {row: lines.length - 1, column: lines.at(-1).length};
}

const cleanMutationKinds = [
  "insert",
  "delete",
  "replace",
];

const recoveryMutations = [
  {kind: "recovery-number-exponent", text: "#1e+"},
  {kind: "recovery-number-base", text: "#0xGG"},
  {kind: "recovery-unicode-escape", text: "\\u{D800}"},
  {kind: "recovery-automatic-link", text: "https://host/a_(b"},
  {kind: "recovery-return", text: "#return +"},
  {kind: "recovery-set", text: "#set text("},
  {kind: "recovery-embedded-code", text: "#"},
];
const recoveryMutationKinds = recoveryMutations.map(({kind}) => kind);
const allMutationKinds = new Set([
  ...cleanMutationKinds,
  ...recoveryMutationKinds,
]);

if (requestedMutationKind && !allMutationKinds.has(requestedMutationKind)) {
  throw new Error(`unknown mutation kind: ${requestedMutationKind}`);
}

function mutate(text, requestedKind) {
  // Always sample a kind so --case-seed replay consumes the same random value
  // when --mutation-kind overrides an initially scheduled mutation.
  const sampledKind = choice(cleanMutationKinds);
  const kind = requestedKind ?? sampledKind;
  if (!cleanMutationKinds.includes(kind)) {
    throw new Error(`not a clean mutation kind: ${kind}`);
  }

  let edit;
  if (kind === "insert") {
    const index = integer(text.length + 1);
    const newText = choice([
      "x",
      " ",
      "\n",
      "\r\n",
      "\u2028",
      ")",
      "]",
      "}",
      "$",
      "#",
      "/* */",
      "`",
      "\\u{D800}",
      "1e+",
    ]);
    edit = {index, oldText: "", newText};
  } else if (kind === "delete") {
    if (text.length === 0) {
      edit = {index: 0, oldText: "", newText: "x"};
    } else {
      const index = integer(text.length);
      const size = Math.min(text.length - index, 1 + integer(8));
      edit = {
        index,
        oldText: text.slice(index, index + size),
        newText: "",
      };
    }
  } else if (text.length === 0) {
    edit = {index: 0, oldText: "", newText: "#x"};
  } else {
    const index = integer(text.length);
    const size = Math.min(text.length - index, 1 + integer(6));
    edit = {
      index,
      oldText: text.slice(index, index + size),
      newText: choice(atoms),
    };
  }
  return {...edit, kind};
}

function mutateWithRecoveryPressure(text, requestedKind) {
  // Consume both selections even when replay or deterministic coverage chooses
  // the kind. This keeps --case-seed stable.
  const useCleanMutation = random() < 0.5;
  if (
    requestedKind
      ? cleanMutationKinds.includes(requestedKind)
      : useCleanMutation
  ) {
    return mutate(text, requestedKind);
  }

  const sampledRecovery = choice(recoveryMutations);
  const recovery = requestedKind
    ? recoveryMutations.find(({kind}) => kind === requestedKind)
    : sampledRecovery;
  if (!recovery) {
    throw new Error(`not a recovery mutation kind: ${requestedKind}`);
  }
  if (random() < 0.5) {
    return {
      index: 0,
      oldText: "",
      newText: `${recovery.text}\n`,
      kind: recovery.kind,
    };
  }
  return {
    index: text.length,
    oldText: "",
    newText: `\n${recovery.text}`,
    kind: recovery.kind,
  };
}

function sourceAfterEdit(text, edit) {
  assert.equal(
    text.slice(edit.index, edit.index + edit.oldText.length),
    edit.oldText,
    "generated edit does not match its source",
  );
  return (
    text.slice(0, edit.index) +
    edit.newText +
    text.slice(edit.index + edit.oldText.length)
  );
}

function applyEdit(before, after, tree, edit) {
  tree.edit({
    startIndex: edit.index,
    oldEndIndex: edit.index + edit.oldText.length,
    newEndIndex: edit.index + edit.newText.length,
    startPosition: pointAt(before, edit.index),
    oldEndPosition: pointAt(before, edit.index + edit.oldText.length),
    newEndPosition: pointAt(after, edit.index + edit.newText.length),
  });
  return parser.parse(after, tree);
}

function nodeBoolean(node, property) {
  const value = node[property];
  return typeof value === "function" ? value.call(node) : Boolean(value);
}

function snapshotNode(node) {
  const children = [];
  for (let index = 0; index < node.childCount; index += 1) {
    const child = node.child(index);
    if (!child) continue;
    const field = typeof node.fieldNameForChild === "function"
      ? node.fieldNameForChild(index)
      : null;
    children.push([field, snapshotNode(child)]);
  }
  return [
    node.type,
    nodeBoolean(node, "isNamed"),
    nodeBoolean(node, "isMissing"),
    node.startIndex,
    node.endIndex,
    [node.startPosition.row, node.startPosition.column],
    [node.endPosition.row, node.endPosition.column],
    children,
  ];
}

function serializeTree(tree) {
  return JSON.stringify(snapshotNode(tree.rootNode));
}

function writeFailureArtifacts(failure, incrementalTree, cleanTree) {
  if (!debugFailure) return;
  writeFileSync(`${debugFailure}.before.typ`, failure.source);
  writeFileSync(`${debugFailure}.after.typ`, failure.after);
  writeFileSync(`${debugFailure}.incremental.txt`, incrementalTree);
  writeFileSync(`${debugFailure}.clean.txt`, cleanTree);
  writeFileSync(
    `${debugFailure}.json`,
    JSON.stringify(failure, null, 2),
  );
}

const parser = new Parser();
parser.setLanguage(language);
const minimumCoverageSample = 100;
const scheduledMutationKinds = includeErrorRecovery
  ? [...cleanMutationKinds, ...recoveryMutationKinds]
  : cleanMutationKinds;

function generateCase(mutationKind) {
  const caseSeed = seed >>> 0;
  let source = generatedSource();
  if (source.length > maxLength) source = source.slice(0, maxLength);

  const oldTree = parser.parse(source);
  const sourceHasIssue =
    oldTree.rootNode.type !== "source_file" ||
    treeHasSyntaxIssue(oldTree.rootNode);
  const edit = includeErrorRecovery
    ? mutateWithRecoveryPressure(source, mutationKind)
    : mutate(source, mutationKind);
  const after = sourceAfterEdit(source, edit);
  const cleanTree = parser.parse(after);
  const incrementalTree = applyEdit(source, after, oldTree, edit);
  const incrementalHasIssue =
    incrementalTree.rootNode.type !== "source_file" ||
    treeHasSyntaxIssue(incrementalTree.rootNode);
  const cleanHasIssue =
    cleanTree.rootNode.type !== "source_file" ||
    treeHasSyntaxIssue(cleanTree.rootNode);

  return {
    caseSeed,
    source,
    edit,
    after,
    cleanTree,
    incrementalTree,
    sourceHasIssue,
    incrementalHasIssue,
    cleanHasIssue,
    hasSyntaxIssue:
      sourceHasIssue || incrementalHasIssue || cleanHasIssue,
    postEditHasSyntaxIssue: incrementalHasIssue || cleanHasIssue,
  };
}

let checkedCases = 0;
let skippedSyntaxCases = 0;
let scheduledCoverageRetries = 0;
let syntaxIssueCases = 0;
let incrementalMismatches = 0;
const uniqueCases = new Set();
const checkedMutationKinds = new Set();
let scheduledMutationIndex = 0;

for (let iteration = 0; iteration < iterations; iteration += 1) {
  const scheduledMutationKind = requestedMutationKind ?? (
    !singleCase && scheduledMutationIndex < scheduledMutationKinds.length
      ? scheduledMutationKinds[scheduledMutationIndex]
      : undefined
  );
  let generatedCase = generateCase(scheduledMutationKind);
  while (
    scheduledMutationKind &&
    !includeErrorRecovery &&
    generatedCase.hasSyntaxIssue
  ) {
    scheduledCoverageRetries += 1;
    assert(
      scheduledCoverageRetries <= 1000,
      `could not generate a clean ${scheduledMutationKind} mutation`,
    );
    generatedCase = generateCase(scheduledMutationKind);
  }
  if (scheduledMutationKind?.startsWith("recovery-")) {
    assert(
      generatedCase.postEditHasSyntaxIssue,
      `${scheduledMutationKind} did not produce a syntax issue`,
    );
  }
  const {
    caseSeed,
    source,
    edit,
    after,
    cleanTree,
    incrementalTree,
    sourceHasIssue,
    incrementalHasIssue,
    cleanHasIssue,
    hasSyntaxIssue,
    postEditHasSyntaxIssue,
  } = generatedCase;
  uniqueCases.add(JSON.stringify([
    source,
    edit.index,
    edit.oldText,
    edit.newText,
  ]));

  if (!includeErrorRecovery && hasSyntaxIssue) {
    skippedSyntaxCases += 1;
    continue;
  }

  checkedCases += 1;
  checkedMutationKinds.add(edit.kind);
  if (
    !singleCase &&
    !requestedMutationKind &&
    edit.kind === scheduledMutationKinds[scheduledMutationIndex]
  ) {
    scheduledMutationIndex += 1;
  }
  if (postEditHasSyntaxIssue) syntaxIssueCases += 1;

  const incrementalSnapshot = serializeTree(incrementalTree);
  const cleanSnapshot = serializeTree(cleanTree);
  if (incrementalSnapshot === cleanSnapshot) continue;

  const failure = {
    initialSeed,
    iteration,
    caseSeed,
    source,
    edit,
    after,
    sourceHasIssue,
    incrementalHasIssue,
    cleanHasIssue,
    mutationKind: edit.kind,
    includeErrorRecovery,
    maxLength,
  };
  writeFailureArtifacts(
    failure,
    incrementalSnapshot,
    cleanSnapshot,
  );

  if (checkIncremental) {
    assert.strictEqual(
      incrementalSnapshot,
      cleanSnapshot,
      `incremental mismatch\n${JSON.stringify(failure, null, 2)}`,
    );
  }
  incrementalMismatches += 1;
}

if (!singleCase) {
  assert(checkedCases > 0, "fuzzing did not check any cases");
}
if (!singleCase) {
  assert(
    uniqueCases.size >= iterations / 2,
    `fuzz diversity too low: ${uniqueCases.size}/${iterations} unique edits`,
  );
}
if (
  !singleCase &&
  !requestedMutationKind &&
  iterations >= scheduledMutationKinds.length
) {
  assert.deepStrictEqual(
    [...checkedMutationKinds].sort(),
    [...scheduledMutationKinds].sort(),
    "fuzzing did not check every mutation kind",
  );
}
if (
  !singleCase &&
  iterations >= minimumCoverageSample &&
  !includeErrorRecovery
) {
  const checkedRatio = checkedCases / iterations;
  assert(
    checkedRatio >= 0.5,
    `clean fuzz coverage too low: checked ${checkedCases}/${iterations}`,
  );
}
if (
  !singleCase &&
  iterations >= minimumCoverageSample &&
  includeErrorRecovery
) {
  const recoveryRatio = syntaxIssueCases / checkedCases;
  assert(
    recoveryRatio >= 0.6,
    `recovery fuzz coverage too low: ${syntaxIssueCases}/${checkedCases} ` +
      "edited cases had syntax issues",
  );
}

const skippedMessage = skippedSyntaxCases
  ? `, skipped ${skippedSyntaxCases} syntax-issue cases`
  : "";
const retryMessage = scheduledCoverageRetries
  ? `, retried ${scheduledCoverageRetries} scheduled coverage cases`
  : "";
const mismatchMessage = incrementalMismatches
  ? `, observed ${incrementalMismatches} non-gated incremental mismatches`
  : "";
const resultLabel = checkedCases === 0
  ? "fuzz parser replay skipped"
  : "fuzz parser tests passed";
console.log(
  `${resultLabel} (${checkedCases}/${iterations} checked, ` +
  `${uniqueCases.size} unique edits, ${checkedMutationKinds.size} checked ` +
  `mutation kinds, ` +
  `${syntaxIssueCases} post-edit ` +
  `syntax-issue cases, initial seed ${initialSeed}` +
  `${skippedMessage}${retryMessage}${mismatchMessage})`,
);
