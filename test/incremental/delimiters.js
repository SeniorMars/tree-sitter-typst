// Run after generating Node bindings:
//   npm install tree-sitter
//   TREE_SITTER_TYPST_BINDING=../../bindings/node node test/incremental/delimiters.js
//
// Each edit inserts one character immediately before a closing delimiter. The
// incrementally reparsed tree must equal a clean parse and must not crash.
import assert from "node:assert";
import Parser from "tree-sitter";

const {default: language} = await import(
  process.env.TREE_SITTER_TYPST_BINDING || "../../bindings/node/index.js"
);

const cases = [
  ['#foo(a)', '#foo(ab)', 6, 'b'],
  ['[x]', '[xy]', 2, 'y'],
  ['$a$', '$ab$', 2, 'b'],
  ['*a*', '*ab*', 2, 'b'],
  ['_a_', '_ab_', 2, 'b'],
  ['`a`', '`ab`', 2, 'b'],
  ['```typc\na\n```', '```typc\nab\n```', 10, 'b'],
];

const parser = new Parser();
parser.setLanguage(language);

function pointAt(text, index) {
  const prefix = text.slice(0, index);
  const lines = prefix.split('\n');
  return {row: lines.length - 1, column: Buffer.byteLength(lines.at(-1))};
}

for (const [before, after, index, inserted] of cases) {
  const oldTree = parser.parse(before);
  const startPosition = pointAt(before, index);
  const newEndPosition = {
    row: startPosition.row,
    column: startPosition.column + Buffer.byteLength(inserted),
  };
  oldTree.edit({
    startIndex: index,
    oldEndIndex: index,
    newEndIndex: index + Buffer.byteLength(inserted),
    startPosition,
    oldEndPosition: startPosition,
    newEndPosition,
  });

  const incremental = parser.parse(after, oldTree);
  const clean = parser.parse(after);
  assert.strictEqual(incremental.rootNode.toString(), clean.rootNode.toString());
}

console.log("incremental delimiter tests passed");
