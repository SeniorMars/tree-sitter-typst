import assert from "node:assert";
import { test } from "node:test";
import Parser from "tree-sitter";

test("can load grammar", () => {
  const parser = new Parser();
  assert.doesNotReject(async () => {
    const { default: language } = await import("./index.js");
    parser.setLanguage(language);
  });
});

test("exports editor queries", async () => {
  const { default: language } = await import("./index.js");
  assert.match(language.HIGHLIGHTS_QUERY, /math_group/);
  assert.match(language.INJECTIONS_QUERY, /@injection/);
  assert.match(language.LOCALS_QUERY, /@local/);
  assert.match(language.FOLDS_QUERY, /@fold/);
  assert.match(language.TAGS_QUERY, /@definition/);
});
