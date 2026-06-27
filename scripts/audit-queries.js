#!/usr/bin/env node
import assert from "node:assert";
import { readFileSync, readdirSync } from "node:fs";
import { join } from "node:path";
import Parser from "tree-sitter";

const { default: language } = await import("../bindings/node/index.js");

const root = new URL("..", import.meta.url);
const queryDir = new URL("../queries/typst/", import.meta.url);
const helixQueryDir = new URL("../editors/helix/queries/", import.meta.url);

const auditSource = String.raw`#!/usr/bin/env typst
= Audit Title <audit>

  leading indented paragraph

- Bullet item
  continued bullet text
+ Numbered item
/ Term: description

*strong* _emphasis_ 'quote' --- \# \
See https://typst.app/docs/. and @audit[Audit].
[bracketed text]

` + "```typc\nlet raw_value = 1\nraw_value + 2\n```\n" + String.raw`
` + "```typ\n#let injected = true\n```\n" + String.raw`

#let f(x, y: 1, ..rest) = x + y
#let (_, head, tail: renamed, ..others) = (1, 2)
#let data = (key: value, nested: (inner: none))
#(left, target.value) = pair
#set text(size: 11pt)
#show heading: it => emph(it.body)
#image("diagram.png")
#import "module.typ": (nested.item as renamed, other)
#import mod_name as mod
#include "chapter.typ"
#include chapter_path
#for item in (1, 2){
  item
}
#{
  if true {
    return none
  } else { no }
}
#none #auto #true #123 #1.5 #2pt #"hi\n"
#foo.bar(1, named: value, ..args)[content]
$ f(size: #12pt, ..#args) + alpha.beta / (b + c) + √x! + a_1^2' & ... $
`;

function captureNames(queryText) {
  const withoutComments = queryText
    .split("\n")
    .map((line) => line.replace(/;.*/, ""))
    .join("\n");
  return [...new Set([...withoutComments.matchAll(/@([A-Za-z0-9_.-]+)/g)].map((match) => match[1]))];
}

function queryFiles() {
  return readdirSync(queryDir)
    .filter((name) => name.endsWith(".scm"))
    .sort()
    .map((name) => join(queryDir.pathname, name));
}

function nodeQueryText(queryText) {
  return queryText
    .split("\n")
    .filter((line) => !/^\s*\(#(?:offset|set)!/.test(line))
    .join("\n");
}

function parseSource(source) {
  const tree = parser.parse(source);
  assert.equal(tree.rootNode.hasError, false, tree.rootNode.toString());
  return tree;
}

function queryCaptures(name, source) {
  const query = new Parser.Query(
    language,
    nodeQueryText(readFileSync(join(queryDir.pathname, name), "utf8")),
  );
  return query.captures(parseSource(source).rootNode);
}

function queryCapturesFrom(dir, name, source) {
  const query = new Parser.Query(
    language,
    nodeQueryText(readFileSync(join(dir.pathname, name), "utf8")),
  );
  return query.captures(parseSource(source).rootNode);
}

function hasCapture(captures, name, text, row, column) {
  return captures.some((capture) =>
    capture.name === name &&
    capture.node.text === text &&
    capture.node.startPosition.row === row - 1 &&
    capture.node.startPosition.column === column
  );
}

function assertCapture(captures, name, text, row, column) {
  assert(
    hasCapture(captures, name, text, row, column),
    `missing ${name} capture for ${JSON.stringify(text)} at ${row}:${column}`,
  );
}

function assertNoCapture(captures, name, text, row, column) {
  assert(
    !hasCapture(captures, name, text, row, column),
    `unexpected ${name} capture for ${JSON.stringify(text)} at ${row}:${column}`,
  );
}

function assertCaptureText(captures, name, text) {
  assert(
    captures.some((capture) => capture.name === name && capture.node.text === text),
    `missing ${name} capture for ${JSON.stringify(text)}`,
  );
}

function assertNoCaptureText(captures, name, text) {
  assert(
    !captures.some((capture) => capture.name === name && capture.node.text === text),
    `unexpected ${name} capture for ${JSON.stringify(text)}`,
  );
}

function assertCaptureNodeType(captures, name, type) {
  assert(
    captures.some((capture) => capture.name === name && capture.node.type === type),
    `missing ${name} capture for node type ${type}`,
  );
}

const parser = new Parser();
parser.setLanguage(language);
const tree = parseSource(auditSource);

for (const file of queryFiles()) {
  const text = readFileSync(file, "utf8");
  const query = new Parser.Query(language, nodeQueryText(text));
  const declared = captureNames(text);
  const seen = new Set(query.captures(tree.rootNode).map((capture) => capture.name));
  const missing = declared.filter((name) => !seen.has(name));
  assert.deepEqual(
    missing,
    [],
    `${file.replace(root.pathname, "")}: captures not exercised: ${missing.join(", ")}`,
  );
  console.log(`${file.replace(root.pathname, "")}: ${declared.length} captures exercised`);
}

{
  const captures = queryCaptures("indents.scm", "$ mat(\n  a, b\n) $\n");
  assertNoCapture(captures, "indent.end", "$", 1, 0);
  assertCapture(captures, "indent.end", "$", 3, 2);
}

for (const [dir, name] of [[queryDir, "indents.scm"], [helixQueryDir, "indents.scm"]]) {
  const captures = queryCapturesFrom(dir, name, "#foo(\n  a,\n  b\n)\n");
  const label = `${dir === queryDir ? "queries/typst" : "editors/helix/queries"}/${name}`;
  assert(
    !captures.some((capture) => capture.node.type === "arguments"),
    `${label}: arguments wrapper should not be an indent capture`,
  );
  const listCaptures = queryCapturesFrom(dir, name, "- first\n  - child\n    body\n");
  assert(
    !listCaptures.some((capture) =>
      ["bullet_list_item", "numbered_list_item", "term_list_item"].includes(capture.node.type)
    ),
    `${label}: list item wrapper should not be an indent capture`,
  );
}

{
  const source = "#let f = x => x + 1\n#let g = (x) => x + 1\n";
  assertCapture(
    queryCaptures("highlights.scm", source),
    "variable.parameter",
    "x",
    1,
    9,
  );
  assertCapture(
    queryCaptures("locals.scm", source),
    "local.definition",
    "x",
    1,
    9,
  );
}

{
  const captures = queryCaptures(
    "locals.scm",
    "#import \"module.typ\": foo, sub.bar, baz as qux\n",
  );
  assertCapture(captures, "local.definition", "foo", 1, 22);
  assertCapture(captures, "local.definition", "bar", 1, 31);
  assertCapture(captures, "local.definition", "qux", 1, 43);
}

{
  const captures = queryCaptures("tags.scm", "#show heading: it => emph(it.body)\n");
  assert(
    !captures.some((capture) => capture.name === "definition.macro"),
    "show_rule should not produce a nameless definition.macro tag",
  );
}

{
  const captures = queryCaptures(
    "highlights.scm",
    "#let data = (key: value)\n#foo(named: value)\n#let (_, x) = pair\n[bracketed]\n",
  );
  assertCapture(captures, "property", "key", 1, 13);
  assertCapture(captures, "variable.parameter", "named", 2, 5);
  assertCapture(captures, "variable.builtin", "_", 3, 6);
  assertCapture(captures, "punctuation.bracket", "[", 4, 0);
}

{
  const captures = queryCaptures("highlights.scm", "#let f(x) = x\n#let value = 1\n");
  assertCaptureText(captures, "function", "f");
  assertCaptureText(captures, "variable.definition", "value");
  assertNoCaptureText(captures, "variable.definition", "f");
}

{
  const captures = queryCaptures(
    "highlights.scm",
    "#value\n#foo(bar: value)\n#set text(size: 10pt)\n",
  );
  assertCapture(captures, "punctuation.special", "#", 1, 0);
  assertCapture(captures, "variable", "value", 1, 1);
  assertCapture(captures, "punctuation.special", "#", 2, 0);
  assertCapture(captures, "function.call", "foo", 2, 1);
  assertCapture(captures, "variable.parameter", "bar", 2, 5);
  assertCapture(captures, "punctuation.special", "#", 3, 0);
  assertCapture(captures, "keyword", "set", 3, 1);
  assertCapture(captures, "function.builtin", "text", 3, 5);
}

{
  const captures = queryCaptures(
    "tags.scm",
    "#import mod_name as mod\n#include chapter_path\n",
  );
  assertCapture(captures, "name", "mod_name", 1, 8);
  assertCapture(captures, "name", "chapter_path", 2, 9);
}

{
  const captures = queryCaptures(
    "tags.scm",
    "= Tagged <tagged>\n#let f(x) = x\n#let value = 1\n#import \"module.typ\": item, nested.thing as alias\n#import mod_name as mod\n",
  );
  assertCaptureText(captures, "definition.label", "<tagged>");
  assertCaptureNodeType(captures, "definition.function", "let_binding");
  assertCaptureNodeType(captures, "definition.var", "let_binding");
  assertCaptureNodeType(captures, "definition.import", "import_item");
  assertCaptureNodeType(captures, "definition.import", "module_import");
}

{
  const captures = queryCaptures("folds.scm", "= H\nbody\n");
  assertCaptureNodeType(captures, "fold", "content");
}

console.log("query audit passed");
