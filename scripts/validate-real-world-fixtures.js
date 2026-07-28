#!/usr/bin/env node
import { readdirSync, readFileSync, statSync } from "node:fs";
import { dirname, extname, join, resolve } from "node:path";
import Parser from "tree-sitter";

import {isSyntaxIssueNode} from "./syntax-issues.js";

const { default: language } = await import("../bindings/node/index.js");

const options = {
  failOnError: false,
  expectRecoveryNode: false,
  expectMissing: false,
  expectSyntaxIssueEach: false,
  expectations: null,
  expectedNodeTypes: [],
  fixtureRoot: resolve("test/fixtures/real_world"),
  manifest: resolve("test/fixtures/real_world_manifest.json"),
};
const inputs = [];

for (let i = 2; i < process.argv.length; i += 1) {
  const arg = process.argv[i];
  if (arg === "--fail-on-error") {
    options.failOnError = true;
  } else if (arg === "--expect-recovery-node" || arg === "--expect-malformed") {
    options.expectRecoveryNode = true;
  } else if (arg === "--expect-missing") {
    options.expectMissing = true;
  } else if (arg === "--expect-syntax-issue-each") {
    options.expectSyntaxIssueEach = true;
  } else if (arg === "--expectations") {
    options.expectations = resolve(process.argv[++i]);
  } else if (arg === "--expect-node-type") {
    options.expectedNodeTypes.push(process.argv[++i]);
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

function loadSyntaxExpectations(path) {
  if (!path) return new Map();
  const manifest = JSON.parse(readFileSync(path, "utf8"));
  const base = dirname(path);
  const expectations = new Map();
  for (const [file, expectation] of Object.entries(manifest)) {
    if (
      !Array.isArray(expectation.requires ?? []) ||
      (
        (expectation.requires?.length ?? 0) === 0 &&
        !expectation.requires_missing &&
        !expectation.requires_recovery
      )
    ) {
      throw new Error(`fixture expectation has no requirement: ${file}`);
    }
    expectations.set(resolve(base, file), expectation);
  }
  return expectations;
}

function treeErrors(node, output = []) {
  const missing = typeof node.isMissing === "function" ? node.isMissing() : node.isMissing;
  const recovery = isSyntaxIssueNode(node);
  if (node.type === "ERROR" || missing || recovery) {
    output.push({
      type: node.type,
      missing,
      recovery,
      row: node.startPosition.row + 1,
      column: node.startPosition.column,
      text: node.text.slice(0, 80).replace(/\s+/g, " "),
    });
  }
  for (let i = 0; i < node.childCount; i += 1) {
    const child = node.child(i);
    if (child) treeErrors(child, output);
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
const syntaxExpectations = loadSyntaxExpectations(options.expectations);

const failures = [];
const expectedFailures = [];
const cleanExpectedFailures = [];
let missingNodeCount = 0;
let recoveryNodeCount = 0;
const syntaxIssueFreeFiles = [];
const nodeTypeCounts = new Map();
const errorsByFile = new Map();
let totalBytes = 0;
for (const file of files) {
  const source = readFileSync(file, "utf8");
  totalBytes += Buffer.byteLength(source);
  const tree = parser.parse(source);
  const errors = treeErrors(tree.rootNode);
  errorsByFile.set(file, errors);
  for (const error of errors) {
    nodeTypeCounts.set(error.type, (nodeTypeCounts.get(error.type) ?? 0) + 1);
  }
  missingNodeCount += errors.filter((error) => error.missing).length;
  recoveryNodeCount += errors.filter((error) => error.recovery).length;
  const treeErrorCount = errors.filter(
    (error) => error.type === "ERROR" || error.missing,
  ).length;
  if (tree.rootNode.hasError && treeErrorCount === 0) {
    throw new Error(
      `root hasError but traversal found no ERROR or MISSING node: ${file}`,
    );
  }
  const expectsSyntaxIssue =
    expectedTreeErrorFiles.has(file) || syntaxExpectations.has(file);
  if (errors.length > 0) {
    if (expectsSyntaxIssue) {
      expectedFailures.push({ file, errors });
    } else {
      failures.push({ file, errors });
    }
  } else if (expectsSyntaxIssue) {
    cleanExpectedFailures.push(file);
  }
  if (errors.length === 0) {
    syntaxIssueFreeFiles.push(file);
  }
}

const expectationFailures = [];
if (syntaxExpectations.size > 0) {
  const inputFiles = new Set(files);
  for (const file of files) {
    const expectation = syntaxExpectations.get(file);
    if (!expectation) {
      expectationFailures.push(`missing fixture expectation: ${file}`);
      continue;
    }

    const errors = errorsByFile.get(file);
    const types = new Set(errors.map(({type}) => type));
    for (const type of expectation.requires ?? []) {
      if (!types.has(type)) {
        expectationFailures.push(`${file}: expected syntax node ${type}`);
      }
    }
    if (
      expectation.requires_missing &&
      !errors.some(({missing}) => missing)
    ) {
      expectationFailures.push(`${file}: expected a MISSING node`);
    }
    if (
      expectation.requires_recovery &&
      !errors.some(({recovery}) => recovery)
    ) {
      expectationFailures.push(`${file}: expected a recovery syntax node`);
    }
  }
  for (const file of syntaxExpectations.keys()) {
    if (!inputFiles.has(file)) {
      expectationFailures.push(`fixture expectation has no input file: ${file}`);
    }
  }
}

console.log(`real-world parse report: ${files.length} files, ${totalBytes} bytes`);
console.log(`files with syntax issues: ${failures.length + expectedFailures.length}`);
console.log(`unexpected files with syntax issues: ${failures.length}`);
console.log(`expected-error files with syntax issues: ${expectedFailures.length}`);
console.log(`explicit recovery syntax nodes: ${recoveryNodeCount}`);
for (const failure of failures) {
  const first = failure.errors[0];
  console.log(
    `  ${failure.file}:${first.row}:${first.column}: ${failure.errors.length} syntax issue node(s), first=${first.type}`,
  );
}
for (const failure of expectedFailures) {
  const first = failure.errors[0];
  console.log(
    `  expected ${failure.file}:${first.row}:${first.column}: ${failure.errors.length} syntax issue node(s), first=${first.type}`,
  );
}
for (const file of cleanExpectedFailures) {
  console.log(`  expected ${file}: no Tree-sitter error`);
}
for (const failure of expectationFailures) {
  console.error(`  ${failure}`);
}

if (expectationFailures.length > 0) {
  process.exit(1);
}

if (options.expectMissing && missingNodeCount === 0) {
  console.error("expected at least one MISSING node, but traversal found none");
  process.exit(1);
}

if (options.expectRecoveryNode && recoveryNodeCount === 0) {
  console.error("expected at least one explicit recovery syntax node, but traversal found none");
  process.exit(1);
}

if (options.expectSyntaxIssueEach && syntaxIssueFreeFiles.length > 0) {
  for (const file of syntaxIssueFreeFiles) {
    console.error(`expected a syntax issue in every input file, but found none: ${file}`);
  }
  process.exit(1);
}

for (const type of options.expectedNodeTypes) {
  if ((nodeTypeCounts.get(type) ?? 0) === 0) {
    console.error(`expected syntax node type ${type}, but traversal found none`);
    process.exit(1);
  }
}

if (options.failOnError && (failures.length > 0 || cleanExpectedFailures.length > 0)) {
  process.exit(1);
}
