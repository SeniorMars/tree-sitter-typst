import assert from "node:assert";
import Parser from "tree-sitter";

const {default: language} = await import(
  process.env.TREE_SITTER_TYPST_BINDING || "../../bindings/node/index.js"
);

const parser = new Parser();
parser.setLanguage(language);

function pointAt(text, index) {
  const prefix = text.slice(0, index);
  const lines = prefix.split("\n");
  return {row: lines.length - 1, column: Buffer.byteLength(lines.at(-1))};
}

function assertAppendConverges(name, before, inserted) {
  const index = before.length;
  const after = before + inserted;
  const oldTree = parser.parse(before);
  assert.equal(oldTree.rootNode.hasError, true, name);

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
  assert.equal(clean.rootNode.hasError, false, clean.rootNode.toString());
  assert.strictEqual(
    incremental.rootNode.toString(),
    clean.rootNode.toString(),
    name,
  );
}

assertAppendConverges("complete unclosed string", '#"abc', '"');
assertAppendConverges("complete unclosed raw", "`abc", "`");
assertAppendConverges("complete unclosed raw block language", "```abc", "\n```");
assertAppendConverges("complete unclosed raw block body", "```\nabc", "\n```");
assertAppendConverges("complete unclosed raw block", "```typ\nabc", "```");

console.log("incremental string tests passed");
