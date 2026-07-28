#!/usr/bin/env node
import assert from "node:assert";
import { readFileSync, readdirSync } from "node:fs";
import { join } from "node:path";
import Parser from "tree-sitter";

import {
  SYNTAX_ISSUE_NODE_TYPES,
  treeHasSyntaxIssue,
} from "./syntax-issues.js";

const { default: language } = await import("../bindings/node/index.js");

const root = new URL("..", import.meta.url);
const queryDir = new URL("../queries/typst/", import.meta.url);
const helixQueryDir = new URL("../editors/helix/queries/", import.meta.url);
const emacsFontLockFile = new URL("../editors/emacs/tree-sitter-typst-font-lock.el", import.meta.url);

const auditSource = String.raw`#!/usr/bin/env typst
// line comment
/* block comment */
// TODO line comment
/* NOTE block comment */
// WARNING line comment
/* FIXME block comment */
= Audit Title <audit>
== Audit Level Two
=== Audit Level Three
==== Audit Level Four
===== Audit Level Five
====== Audit Level Six

  leading indented paragraph

- Bullet item
  continued bullet text
+ Numbered item
/ Term: description

*strong* _emphasis_ 'quote' --- \# \
See https://typst.app/docs/. and @audit[Audit].
[bracketed text]

` + "Untagged raw `literal`.\n\n" + "```\nplain raw block\n```\n" + "```typc\nlet raw_value = 1\nraw_value + 2\n```\n" + String.raw`
` + "```typ\n#let injected = true\n```\n" + String.raw`

#let f(x, y: 1, ..rest) = x + y
#let drop(_, .._) = none
#let (_, head, tail: renamed, ..others) = (1, 2)
#let data = (key: value, nested: (inner: none))
#(left, target.value) = pair
#set text(size: 11pt)
#show heading: it => emph(it.body)
#show figure.caption: it => emph(it.body)
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
#context { none }
#none #auto #true #123 #1.5 #2pt #"hi\n"
#foo.bar(1, named: value, ..args)[content]
$ f(size: #12pt, ..#args) + alpha.beta / (b + c) + √x! + a_1^2' & ... $
`;

const malformedAuditSource = "#1e\nhttps://host/a_(b\n\\u{D800}\n";

function captureNames(queryText) {
  const withoutComments = queryText
    .split("\n")
    .map((line) => line.replace(/;.*/, ""))
    .join("\n");
  return [...new Set([...withoutComments.matchAll(/@([A-Za-z0-9_.-]+)/g)].map((match) => match[1]))];
}

function queryFilesFrom(dir) {
  return readdirSync(dir)
    .filter((name) => name.endsWith(".scm"))
    .sort()
    .map((name) => join(dir.pathname, name));
}

function nodeQueryText(queryText) {
  // node-tree-sitter rejects Neovim's `#offset!` directive. Translate it to
  // ordinary query metadata so the audit can verify that the directive is
  // attached to the right match instead of deleting it from the test input.
  return queryText.replace(
    /^(\s*)\(#offset! @([A-Za-z0-9_.-]+) (-?\d+) (-?\d+) (-?\d+) (-?\d+)\)\s*$/gm,
    (_, indent, capture, startRow, startColumn, endRow, endColumn) =>
      `${indent}(#set! audit.offset.${capture} ` +
      `"${startRow} ${startColumn} ${endRow} ${endColumn}")`,
  );
}

function parseSource(source, {allowSyntaxIssues = false} = {}) {
  const tree = parser.parse(source);
  if (!allowSyntaxIssues) {
    assert.equal(
      treeHasSyntaxIssue(tree.rootNode),
      false,
      tree.rootNode.toString(),
    );
  }
  return tree;
}

function queryCaptures(name, source, options) {
  const query = new Parser.Query(
    language,
    nodeQueryText(readFileSync(join(queryDir.pathname, name), "utf8")),
  );
  return query.captures(parseSource(source, options).rootNode);
}

function queryCapturesFrom(dir, name, source, options) {
  const query = new Parser.Query(
    language,
    nodeQueryText(readFileSync(join(dir.pathname, name), "utf8")),
  );
  return query.captures(parseSource(source, options).rootNode);
}

function queryMatches(name, source, options) {
  const query = new Parser.Query(
    language,
    nodeQueryText(readFileSync(join(queryDir.pathname, name), "utf8")),
  );
  return query.matches(parseSource(source, options).rootNode);
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

function assertEmacsFontLockStaticSanity() {
  const text = readFileSync(emacsFontLockFile, "utf8");
  for (const obsolete of [
    "typst-ts-mode-font-lock-settings",
    "typst-ts-mode-font-lock-feature-list",
  ]) {
    assert(
      !text.includes(obsolete),
      `${emacsFontLockFile.pathname.replace(root.pathname, "")}: unexpected obsolete variable ${obsolete}`,
    );
  }
  for (const variable of [
    "typst-ts-font-lock-settings",
    "typst-ts-font-lock-feature-list",
  ]) {
    assert(
      text.includes(variable),
      `${emacsFontLockFile.pathname.replace(root.pathname, "")}: missing typst-ts-mode variable ${variable}`,
    );
  }
  assert(
    text.includes('(else_clause "else" @font-lock-keyword-face)'),
    `${emacsFontLockFile.pathname.replace(root.pathname, "")}: missing else_clause keyword rule`,
  );
  for (const rule of [
    "(named_destructuring_item pattern: (identifier) @font-lock-variable-name-face)",
    "(destructuring_sink pattern: (identifier) @font-lock-variable-name-face)",
    '((math_text) @font-lock-operator-face\n      (:match "\\\\`[+=<>]\\\\\'" @font-lock-operator-face))',
    '((math_text) @font-lock-string-face\n      (:match "\\\\`\\\\(?:[^+=<>]\\\\|..+\\\\)\\\\\'" @font-lock-string-face))',
  ]) {
    assert(
      text.includes(rule),
      `${emacsFontLockFile.pathname.replace(root.pathname, "")}: missing Emacs font-lock rule ${rule}`,
    );
  }
  const nodeTypes = new Set(
    JSON.parse(readFileSync(new URL("../src/node-types.json", import.meta.url), "utf8"))
      .map((entry) => entry.type)
      .concat("ERROR"),
  );
  const lispForms = new Set([
    "defun",
    "defvar",
    "font-lock-flush",
    "interactive",
    "provide",
    "require",
    "setq",
    "setq-local",
    "treesit-font-lock-rules",
  ]);
  const fontLockFeatures = new Set([
    "comment",
    "definition",
    "function",
    "keyword",
    "literal",
    "markup",
    "math",
    "operator",
    "punctuation",
    "variable",
  ]);
  const queryFormsOnly = text
    .replace(/;.*/g, "")
    .replace(/"(?:\\.|[^"\\])*"/g, "\"\"");
  const formHeads = [...queryFormsOnly.matchAll(/\(([A-Za-z_][A-Za-z0-9_-]*)\b/g)]
    .map((match) => match[1]);
  const invalid = [...new Set(formHeads)]
    .filter((name) => !lispForms.has(name) && !fontLockFeatures.has(name) && !nodeTypes.has(name))
    .sort();

  assert.deepEqual(
    invalid,
    [],
    `${emacsFontLockFile.pathname.replace(root.pathname, "")}: invalid node types: ${invalid.join(", ")}`,
  );
  console.log(`${emacsFontLockFile.pathname.replace(root.pathname, "")}: static font-lock sanity passed`);
}

function assertSyntaxIssueParity() {
  const nodeTypes = JSON.parse(
    readFileSync(new URL("../src/node-types.json", import.meta.url), "utf8"),
  );
  const publicRecoveryTypes = [...new Set(
    nodeTypes
      .filter((entry) =>
        entry.named && /^(?:malformed|incomplete)_/.test(entry.type)
      )
      .map((entry) => entry.type),
  )].sort();
  const declaredRecoveryTypes = [...SYNTAX_ISSUE_NODE_TYPES].sort();

  assert.deepEqual(
    declaredRecoveryTypes,
    publicRecoveryTypes,
    "scripts/syntax-issues.js must list every public malformed_* and incomplete_* node",
  );

  for (const file of [
    new URL("../queries/typst/highlights.scm", import.meta.url),
    new URL("../editors/helix/queries/highlights.scm", import.meta.url),
    emacsFontLockFile,
  ]) {
    const text = readFileSync(file, "utf8");
    const uncommented = text
      .split("\n")
      .map((line) => line.replace(/;.*/, ""))
      .join("\n");
    const missing = publicRecoveryTypes.filter((type) =>
      !uncommented.includes(`(${type})`)
    );
    assert.deepEqual(
      missing,
      [],
      `${file.pathname.replace(root.pathname, "")}: missing syntax-issue nodes: ${missing.join(", ")}`,
    );
  }
}

const parser = new Parser();
parser.setLanguage(language);
assertSyntaxIssueParity();
const coverageTrees = [
  parseSource(auditSource),
  parseSource(malformedAuditSource, {allowSyntaxIssues: true}),
];
assert.equal(
  treeHasSyntaxIssue(coverageTrees[1].rootNode),
  true,
  "malformed query fixture unexpectedly parsed without a syntax issue",
);

for (const dir of [queryDir, helixQueryDir]) {
  for (const file of queryFilesFrom(dir)) {
    const text = readFileSync(file, "utf8");
    const query = new Parser.Query(language, nodeQueryText(text));
    const declared = captureNames(text);
    const seen = new Set(
      coverageTrees.flatMap((tree) =>
        query.captures(tree.rootNode).map((capture) => capture.name)
      ),
    );
    const missing = declared.filter((name) => !seen.has(name));
    assert.deepEqual(
      missing,
      [],
      `${file.replace(root.pathname, "")}: captures not exercised: ${missing.join(", ")}`,
    );
    console.log(`${file.replace(root.pathname, "")}: ${declared.length} captures exercised`);
  }
}

assertEmacsFontLockStaticSanity();

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
    "#let data = (key: value)\n#foo(named: value)\n#let (_, x) = pair\n#import \"@preview/cetz:0.5.2\": canvas, draw\n[bracketed]\n",
  );
  assertCapture(captures, "property", "key", 1, 13);
  assertCapture(captures, "variable", "value", 1, 18);
  assertCapture(captures, "variable.parameter", "named", 2, 5);
  assertCapture(captures, "variable", "value", 2, 12);
  assertCapture(captures, "variable.builtin", "_", 3, 6);
  assertCapture(captures, "module", "canvas", 4, 31);
  assertCapture(captures, "module", "draw", 4, 39);
  assertNoCapture(captures, "variable", "canvas", 4, 31);
  assertNoCapture(captures, "variable", "draw", 4, 39);
  assertCapture(captures, "punctuation.bracket", "[", 5, 0);

  const helixCaptures = queryCapturesFrom(
    helixQueryDir,
    "highlights.scm",
    "#import \"@preview/cetz:0.5.2\": canvas, draw\n",
  );
  assertCapture(helixCaptures, "namespace", "canvas", 1, 31);
  assertCapture(helixCaptures, "namespace", "draw", 1, 39);
  assertNoCapture(helixCaptures, "variable", "canvas", 1, 31);
  assertNoCapture(helixCaptures, "variable", "draw", 1, 39);
}

{
  const captures = queryCapturesFrom(
    helixQueryDir,
    "highlights.scm",
    "= Heading\n#let size = 2pt\n",
  );
  assertCaptureText(captures, "markup.heading.marker", "=");
  assertCaptureText(captures, "type.builtin", "pt");
}

{
  const captures = queryCapturesFrom(
    helixQueryDir,
    "locals.scm",
    "#let f(x, y: 1, ..rest) = x + y\n#import \"module.typ\": item\n",
  );
  assertCapture(captures, "local.definition.function", "f", 1, 5);
  assertCapture(captures, "local.definition.variable.parameter", "x", 1, 7);
  assertCapture(captures, "local.definition.namespace", "item", 2, 22);
  assertCapture(captures, "local.reference", "x", 1, 26);
  assertCaptureNodeType(captures, "local.scope", "source_file");
}

{
  const source = [
    "#let f(x, y) = x + y",
    "#let block(x) = { x + 1 }",
    "#{ let nested(x) = { x * 2 }; nested(1) }",
    "#let value = 1",
    "#show heading: it => emph(it.body)",
    "#let mapped = (x) => { x + 1 }",
    "",
  ].join("\n");
  const captures = queryCaptures(
    "textobjects.scm",
    source,
  );
  assertCapture(captures, "function.outer", "#let f(x, y) = x + y", 1, 0);
  assertCapture(captures, "function.inner", "x + y", 1, 15);
  assertCapture(
    captures,
    "function.outer",
    "#let block(x) = { x + 1 }",
    2,
    0,
  );
  assertCaptureText(captures, "function.inner", "{ x + 1 }");
  assertCapture(
    captures,
    "function.outer",
    "let nested(x) = { x * 2 }",
    3,
    3,
  );
  assertCaptureNodeType(captures, "function.outer", "closure");
  assertCaptureText(captures, "function.inner", "emph(it.body)");
  assertNoCaptureText(captures, "function.outer", "let value = 1");

  const blockMatches = queryMatches("textobjects.scm", source).filter((match) =>
    match.captures.some((capture) =>
      capture.name === "function.inner" &&
      capture.node.type === "code_block"
    )
  );
  assert.equal(blockMatches.length, 3, "expected all three code-block functions");
  for (const match of blockMatches) {
    assert.equal(
      match.setProperties?.["audit.offset.function.inner"],
      "0 1 0 -1",
      "code-block inner capture must carry Neovim's brace-excluding offset",
    );
  }

  const adjustedInnerTexts = blockMatches.map((match) => {
    const capture = match.captures.find(({name}) => name === "function.inner");
    return source.slice(capture.node.startIndex + 1, capture.node.endIndex - 1);
  });
  assert.deepEqual(
    adjustedInnerTexts.sort(),
    [" x * 2 ", " x + 1 ", " x + 1 "].sort(),
    "Neovim's offsets must select code-block contents without braces",
  );
}

{
  const captures = queryCapturesFrom(
    helixQueryDir,
    "textobjects.scm",
    "= Heading\nBody\n#let f(x, y) = x + y\n// comment\n#foo(1, named: value)\n#let data = (key: value)\n",
  );
  assertCaptureNodeType(captures, "class.around", "section");
  assertCaptureNodeType(captures, "function.around", "let_binding");
  assertCaptureText(captures, "parameter.inside", "x");
  assertCaptureText(captures, "comment.around", "// comment");
  assertCaptureText(captures, "entry.around", "key: value");
}

{
  const captures = queryCapturesFrom(
    helixQueryDir,
    "rainbows.scm",
    "#foo(1)[content]\n$ (a + b) $\n",
  );
  assertCaptureNodeType(captures, "rainbow.scope", "arguments");
  assertCaptureText(captures, "rainbow.bracket", "(");
  assertCaptureText(captures, "rainbow.bracket", "$");
}

{
  const captures = queryCaptures(
    "highlights.scm",
    "// TODO item\n/* NOTE item */\n// WARNING item\n/* FIXME item */\n",
  );
  assertCaptureText(captures, "comment.todo", "// TODO item");
  assertCaptureText(captures, "comment.note", "/* NOTE item */");
  assertCaptureText(captures, "comment.warning", "// WARNING item");
  assertCaptureText(captures, "comment.error", "/* FIXME item */");
}

{
  const captures = queryCaptures(
    "highlights.scm",
    malformedAuditSource,
    {allowSyntaxIssues: true},
  );
  assertCaptureText(captures, "error", "1e");
  assertCaptureText(captures, "error", "https://host/a_(b");
  assertCaptureText(captures, "error", "\\u{D800}");

  const helixCaptures = queryCapturesFrom(
    helixQueryDir,
    "highlights.scm",
    malformedAuditSource,
    {allowSyntaxIssues: true},
  );
  assertCaptureText(helixCaptures, "error", "1e");
  assertCaptureText(helixCaptures, "error", "https://host/a_(b");
  assertCaptureText(helixCaptures, "error", "\\u{D800}");
}

{
  const captures = queryCaptures("highlights.scm", "`literal`\n\n```\nplain\n```\n");
  assertCaptureText(captures, "markup.raw", "literal");
  assertCaptureText(captures, "markup.raw.block", "\nplain\n");
}

{
  const captures = queryCaptures("highlights.scm", "#let f(x) = x\n#let value = 1\n");
  assertCaptureText(captures, "function", "f");
  assertCaptureText(captures, "variable", "value");
  assertCaptureText(captures, "function", "f");
}

{
  const captures = queryCaptures("highlights.scm", "#let drop(_, .._) = none\n");
  assertCapture(captures, "variable.parameter.builtin", "_", 1, 10);
  assertCapture(captures, "variable.parameter.builtin", "_", 1, 15);
}

{
  const source = "#let (_, tail: renamed, ..others) = pair\n";
  const captures = queryCaptures("highlights.scm", source);
  assertCapture(captures, "property", "tail", 1, 9);
  assertCapture(captures, "variable", "renamed", 1, 15);
  assertCapture(captures, "variable", "others", 1, 26);

  const helixCaptures = queryCapturesFrom(helixQueryDir, "highlights.scm", source);
  assertCapture(helixCaptures, "property", "tail", 1, 9);
  assertCapture(helixCaptures, "variable", "renamed", 1, 15);
  assertCapture(helixCaptures, "variable", "others", 1, 26);
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
  const source = "#if first { none } else if second < 1.0 { return \"mid\" } else { none }\n";
  const captures = queryCaptures("highlights.scm", source);
  assertCapture(captures, "keyword.conditional", "if", 1, 1);
  assertCapture(captures, "keyword.conditional", "else", 1, 19);
  assertCapture(captures, "keyword.conditional", "if", 1, 24);
  assertCapture(captures, "keyword.conditional", "else", 1, 57);

  const helixCaptures = queryCapturesFrom(helixQueryDir, "highlights.scm", source);
  assertCapture(helixCaptures, "keyword.control.conditional", "if", 1, 1);
  assertCapture(helixCaptures, "keyword.control.conditional", "else", 1, 19);
  assertCapture(helixCaptures, "keyword.control.conditional", "if", 1, 24);
  assertCapture(helixCaptures, "keyword.control.conditional", "else", 1, 57);
}

{
  const captures = queryCaptures("highlights.scm", "#for item in items { item }\n");
  assertCapture(captures, "variable", "item", 1, 5);
  assertCapture(captures, "variable", "items", 1, 13);
}

{
  const captures = queryCaptures("highlights.scm", "$f(x) foo[y] alpha.beta[z]$\n");
  assertCapture(captures, "function.call", "f", 1, 1);
  assertCapture(captures, "variable", "x", 1, 3);
  assertCapture(captures, "function.call", "foo", 1, 6);
  assertCapture(captures, "function.method.call", "beta", 1, 19);
}

{
  const source = "$x = y + z < w > q, r$\n";
  const captures = queryCaptures("highlights.scm", source);
  assertCapture(captures, "operator", "=", 1, 3);
  assertCapture(captures, "operator", "+", 1, 7);
  assertCapture(captures, "operator", "<", 1, 11);
  assertCapture(captures, "operator", ">", 1, 15);
  assertCapture(captures, "character", ",", 1, 18);
  assertNoCapture(captures, "character", "=", 1, 3);
  assertNoCapture(captures, "character", "+", 1, 7);
  assertNoCapture(captures, "character", "<", 1, 11);
  assertNoCapture(captures, "character", ">", 1, 15);

  const helixCaptures = queryCapturesFrom(helixQueryDir, "highlights.scm", source);
  assertCapture(helixCaptures, "operator", "=", 1, 3);
  assertCapture(helixCaptures, "operator", "+", 1, 7);
  assertCapture(helixCaptures, "operator", "<", 1, 11);
  assertCapture(helixCaptures, "operator", ">", 1, 15);
  assertCapture(helixCaptures, "constant.character", ",", 1, 18);
  assertNoCapture(helixCaptures, "constant.character", "=", 1, 3);
  assertNoCapture(helixCaptures, "constant.character", "+", 1, 7);
  assertNoCapture(helixCaptures, "constant.character", "<", 1, 11);
  assertNoCapture(helixCaptures, "constant.character", ">", 1, 15);
}

{
  const captures = queryCaptures(
    "highlights.scm",
    "#import \"module.typ\": item\n#include \"chapter.typ\"\n#show heading: set text(size: 10pt)\n",
  );
  assertCapture(captures, "keyword.import", "import", 1, 1);
  assertCapture(captures, "string.special.path", "\"module.typ\"", 1, 8);
  assertCapture(captures, "keyword.import", "include", 2, 1);
  assertCapture(captures, "string.special.path", "\"chapter.typ\"", 2, 9);
  assertCapture(captures, "keyword", "show", 3, 1);
  assertCapture(captures, "keyword", "set", 3, 15);
}

{
  const captures = queryCaptures(
    "highlights.scm",
    "#show heading: it\n#show figure.caption: it\n",
  );
  assertCapture(captures, "function.builtin", "heading", 1, 6);
  assertCapture(captures, "function.builtin", "caption", 2, 13);
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
  const captures = queryCaptures(
    "tags.scm",
    "#show heading: it\n#show figure.caption: it\n$ foo(x) + alpha.beta(x) + f(y) + gamma[z] $\n",
  );
  assertCapture(captures, "name", "heading", 1, 6);
  assertCapture(captures, "name", "caption", 2, 13);
  assertCapture(captures, "name", "foo", 3, 2);
  assertCapture(captures, "name", "beta", 3, 17);
  assertCapture(captures, "name", "f", 3, 27);
  assertCapture(captures, "name", "gamma", 3, 34);
}

{
  const captures = queryCaptures("folds.scm", "= H\nbody\n");
  assertCaptureNodeType(captures, "fold", "section");
}

{
  const captures = queryCaptures(
    "folds.scm",
    "#let audit-events = (\n  (\n    phase: \"intake\",\n  ),\n)\n",
  );
  assertCaptureNodeType(captures, "fold", "array");
  assertCaptureNodeType(captures, "fold", "dictionary");
}

{
  const captures = queryCaptures(
    "folds.scm",
    "#let render-matrix(data, caption: [Transition matrix]) = docs-figure(\n  caption: caption,\n  table(\n    columns: (auto, auto, auto),\n    align: center,\n    ..data.map(row => row.map(cell => [#cell])).flatten(),\n  ),\n)\n",
  );
  assertCaptureNodeType(captures, "fold", "let_binding");
  assertCaptureNodeType(captures, "fold", "arguments");
}

console.log("query audit passed");
