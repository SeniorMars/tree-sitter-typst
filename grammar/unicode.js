import {UNICODE_RANGES} from "./unicode-ranges.js";

export function generatedRanges(name) {
  const ranges = UNICODE_RANGES[name];
  if (!ranges) {
    throw new Error(`missing generated Unicode range table: ${name}`);
  }
  return ranges;
}

export function excludeCodepoint(ranges, codepoint) {
  const result = [];
  for (const [first, last] of ranges) {
    if (codepoint < first || codepoint > last) {
      result.push([first, last]);
    } else {
      if (first < codepoint) result.push([first, codepoint - 1]);
      if (codepoint < last) result.push([codepoint + 1, last]);
    }
  }
  return result;
}

function rustCodepoint(codepoint) {
  return `\\u{${codepoint.toString(16).toUpperCase()}}`;
}

export function rustRanges(ranges) {
  return ranges.map(([first, last]) =>
    first === last
      ? rustCodepoint(first)
      : `${rustCodepoint(first)}-${rustCodepoint(last)}`,
  ).join("");
}

export function rustClassFromRanges(ranges) {
  return `[${rustRanges(ranges)}]`;
}
