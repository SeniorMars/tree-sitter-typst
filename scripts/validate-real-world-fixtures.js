#!/usr/bin/env node
import { readdirSync, readFileSync, statSync } from "node:fs";
import { extname, join, resolve } from "node:path";
import Parser from "tree-sitter";

const { default: language } = await import("../bindings/node/index.js");

const options = {
  failOnError: false,
  fixtureRoot: resolve("test/fixtures/real_world"),
  manifest: resolve("test/fixtures/real_world_manifest.json"),
};
const inputs = [];

for (let i = 2; i < process.argv.length; i += 1) {
  const arg = process.argv[i];
  if (arg === "--fail-on-error") {
    options.failOnError = true;
  } else if (arg === "--fixture-root") {
    options.fixtureRoot = resolve(process.argv[++i]);
  } else if (arg === "--manifest") {
    options.manifest = resolve(process.argv[++i]);
  } else if (arg.startsWith("--")) {
    throw new Error(`unknown argument: ${arg}`);
  } else {
    inputs.push(resolve(arg));
  }
}

function collectTypstFiles(paths) {
  const files = [];
  for (const path of paths) {
    const stat = statSync(path);
    if (stat.isFile()) {
      if (extname(path) === ".typ") files.push(path);
      continue;
    }
    if (!stat.isDirectory()) continue;
    for (const entry of readdirSync(path, { withFileTypes: true })) {
      const child = join(path, entry.name);
      if (entry.isDirectory()) {
        files.push(...collectTypstFiles([child]));
      } else if (entry.isFile() && extname(entry.name) === ".typ") {
        files.push(child);
      }
    }
  }
  return files.sort();
}

function manifestPathSet(name) {
  const manifest = JSON.parse(readFileSync(options.manifest, "utf8"));
  return new Set((manifest[name] ?? []).map((path) => resolve(options.fixtureRoot, path)));
}

function treeErrors(node, output = []) {
  const missing = typeof node.isMissing === "function" ? node.isMissing() : node.isMissing;
  if (node.type === "ERROR" || missing) {
    output.push({
      type: node.type,
      row: node.startPosition.row + 1,
      column: node.startPosition.column,
      text: node.text.slice(0, 80).replace(/\s+/g, " "),
    });
  }
  for (let i = 0; i < node.namedChildCount; i += 1) {
    treeErrors(node.namedChild(i), output);
  }
  return output;
}

const files = collectTypstFiles(inputs.length ? inputs : [resolve("test/fixtures/real_world")]);
if (files.length === 0) {
  throw new Error("no .typ files found; run `npm run fetch:real-world` first");
}

const parser = new Parser();
parser.setLanguage(language);
const expectedTreeErrorFiles = manifestPathSet("expected_tree_error_paths");

const failures = [];
const expectedFailures = [];
const cleanExpectedFailures = [];
let totalBytes = 0;
for (const file of files) {
  const source = readFileSync(file, "utf8");
  totalBytes += Buffer.byteLength(source);
  const tree = parser.parse(source);
  const errors = treeErrors(tree.rootNode);
  if (errors.length > 0) {
    if (expectedTreeErrorFiles.has(file)) {
      expectedFailures.push({ file, errors });
    } else {
      failures.push({ file, errors });
    }
  } else if (expectedTreeErrorFiles.has(file)) {
    cleanExpectedFailures.push(file);
  }
}

console.log(`real-world parse report: ${files.length} files, ${totalBytes} bytes`);
console.log(`files with Tree-sitter errors: ${failures.length + expectedFailures.length}`);
console.log(`unexpected files with Tree-sitter errors: ${failures.length}`);
console.log(`expected-error files with Tree-sitter errors: ${expectedFailures.length}`);
for (const failure of failures) {
  const first = failure.errors[0];
  console.log(
    `  ${failure.file}:${first.row}:${first.column}: ${failure.errors.length} error node(s), first=${first.type}`,
  );
}
for (const failure of expectedFailures) {
  const first = failure.errors[0];
  console.log(
    `  expected ${failure.file}:${first.row}:${first.column}: ${failure.errors.length} error node(s), first=${first.type}`,
  );
}
for (const file of cleanExpectedFailures) {
  console.log(`  expected ${file}: no Tree-sitter error`);
}

if (options.failOnError && (failures.length > 0 || cleanExpectedFailures.length > 0)) {
  process.exit(1);
}
