import assert from "node:assert";
import {readFileSync} from "node:fs";
import Parser from "tree-sitter";

import {
  SYNTAX_ISSUE_NODE_TYPES,
  treeHasSyntaxIssue,
} from "../../scripts/syntax-issues.js";

const {default: language} = await import(
  process.env.TREE_SITTER_TYPST_BINDING || "../../bindings/node/index.js"
);

const nodeTypes = JSON.parse(
  readFileSync(new URL("../../src/node-types.json", import.meta.url), "utf8"),
);
const publicRecoveryTypes = nodeTypes
  .filter(({named, type}) => named && /^(?:incomplete|malformed)_/.test(type))
  .map(({type}) => type)
  .sort();

assert.deepEqual(
  [...SYNTAX_ISSUE_NODE_TYPES].sort(),
  publicRecoveryTypes,
  "the syntax-issue classifier must cover every public recovery node",
);

const parser = new Parser();
parser.setLanguage(language);

function pointAt(text, index) {
  const prefix = text.slice(0, index);
  const lines = prefix.split("\n");
  return {row: lines.length - 1, column: lines.at(-1).length};
}

function assertRecoveryEditConverges({
  name,
  source,
  oldText,
  newText,
  last = false,
}) {
  const prefix = "Prelude\n";
  const suffix = "\n#let stable = 1\n";
  const localIndex = last
    ? source.lastIndexOf(oldText)
    : source.indexOf(oldText);
  assert.notEqual(localIndex, -1, `${name}: missing edit target ${oldText}`);

  const before = prefix + source + suffix;
  const index = prefix.length + localIndex;
  const after =
    before.slice(0, index) +
    newText +
    before.slice(index + oldText.length);
  const oldTree = parser.parse(before);
  assert.equal(
    treeHasSyntaxIssue(oldTree.rootNode),
    false,
    `${name}: source must begin clean\n${oldTree.rootNode}`,
  );

  oldTree.edit({
    startIndex: index,
    oldEndIndex: index + oldText.length,
    newEndIndex: index + newText.length,
    startPosition: pointAt(before, index),
    oldEndPosition: pointAt(before, index + oldText.length),
    newEndPosition: pointAt(after, index + newText.length),
  });

  const incremental = parser.parse(after, oldTree);
  const clean = parser.parse(after);
  assert.strictEqual(
    incremental.rootNode.toString(),
    clean.rootNode.toString(),
    `${name}: incremental parse did not converge`,
  );
  assert.equal(
    treeHasSyntaxIssue(incremental.rootNode),
    true,
    `${name}: malformed edit parsed without a syntax issue`,
  );
}

const cases = new Map([
  ["incomplete_let_binding", "#let\n"],
  ["incomplete_module_import", "#import\n"],
  ["incomplete_module_include", "#include\n"],
  ["incomplete_return_expression", "#return +\n"],
  ["incomplete_set_rule", "#set\n"],
  ["incomplete_show_rule", "#show heading.where(level: 2)\n"],
  ["malformed_automatic_link", "https://host/a_(b\n"],
  ["malformed_embedded_code", "#\n"],
  ["malformed_escape", "\\u{D800}\n"],
  ["malformed_number", "#1e\n"],
]);

for (const [type, source] of cases) {
  const tree = parser.parse(source);
  assert(
    tree.rootNode.descendantsOfType(type).length > 0,
    `${type} fixture did not produce its expected node:\n${tree.rootNode}`,
  );
  assert.equal(
    treeHasSyntaxIssue(tree.rootNode),
    true,
    `${type} was not classified as a syntax issue`,
  );
}

const recoveryEdits = [
  {
    name: "unclosed call",
    source: "#f(1)",
    oldText: ")",
    newText: "",
    last: true,
  },
  {
    name: "unclosed content block",
    source: "#[content]",
    oldText: "]",
    newText: "",
    last: true,
  },
  {
    name: "unclosed string",
    source: '#"text"',
    oldText: '"',
    newText: "",
    last: true,
  },
  {
    name: "unclosed raw",
    source: "`raw`",
    oldText: "`",
    newText: "",
    last: true,
  },
  {
    name: "unclosed equation",
    source: "$x$",
    oldText: "$",
    newText: "",
    last: true,
  },
  {
    name: "malformed exponent",
    source: "#1e2",
    oldText: "2",
    newText: "+",
  },
  {
    name: "malformed base literal",
    source: "#0xff",
    oldText: "ff",
    newText: "GG",
  },
  {
    name: "unbalanced automatic link",
    source: "https://host/a_(b)",
    oldText: ")",
    newText: "",
    last: true,
  },
  {
    name: "invalid Unicode scalar escape",
    source: "\\u{41}",
    oldText: "41",
    newText: "D800",
  },
  {
    name: "incomplete let binding",
    source: "#let value = 1",
    oldText: "1",
    newText: "",
    last: true,
  },
  {
    name: "unclosed set arguments",
    source: "#set text(size: 12pt)",
    oldText: ")",
    newText: "",
    last: true,
  },
  {
    name: "incomplete return expression",
    source: "#return 1",
    oldText: "1",
    newText: "+",
    last: true,
  },
  {
    name: "unclosed import string",
    source: '#import "module.typ"',
    oldText: '"',
    newText: "",
    last: true,
  },
];

for (const edit of recoveryEdits) {
  assertRecoveryEditConverges(edit);
}

assert.equal(
  treeHasSyntaxIssue(parser.parse("#let x = 1\n").rootNode),
  false,
  "valid syntax was classified as a syntax issue",
);

console.log(
  `syntax-issue tests passed (${cases.size} node types, ` +
  `${recoveryEdits.length} recovery edits)`,
);
