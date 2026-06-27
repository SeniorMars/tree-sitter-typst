"use strict";

// NOTE: the compliexity of this grammar is a direct consequence of Typst's
// three modes, newline-sensitive parsing, and Unicode identifier support. This
// grammar is designed to be as close to the Typst parser as possible, but some
// differences are unavoidable due to Tree-sitter's limitations and the need
// for scanner-backed rules.
//
// Unfortunately, this makes it hard to read and maintain. I used a lot of "tricks."
// The grammar is organized into sections, with each section containing related rules. 
// The sections are: code, math, markup, and common. Each section contains
// rules that are specific to that mode, as well as rules that are shared
// between modes. The common section contains rules that are shared between all
// modes.
//
// If you are looking to modify the grammar, please read the comments in each section
// and the rules themselves. Otherwise, if you spot an error or have a
// suggestion, please open an issue on the GitHub repository.

import {readFileSync} from "node:fs";
import {join} from "node:path";
import {fileURLToPath} from "node:url";

const GRAMMAR_DIR = fileURLToPath(new URL(".", import.meta.url));

// The default build starts in Typst markup. The same grammar can also generate
// code-mode and math-mode parser variants for editor injections:
//
//   scripts/generate-variants.sh code
//   scripts/generate-variants.sh math
//
// These variants use different start rules and language names, so generate
// them outside `src/` unless you intentionally want to replace the default
// parser artifacts.
const ROOT_MODE = process.env.TYPST_ROOT_MODE || "markup";
const NAMES = {markup: "typst", code: "typc", math: "typm"};
if (!Object.hasOwn(NAMES, ROOT_MODE)) {
  throw new Error(`invalid TYPST_ROOT_MODE: ${ROOT_MODE}`);
}

const UNICODE_TABLES = readFileSync(
  join(GRAMMAR_DIR, "src", "unicode_tables.h"),
  "utf8",
);

function generatedRanges(name) {
  const match = UNICODE_TABLES.match(new RegExp(
    `static const UnicodeRange ${name}\\[\\] = \\{([\\s\\S]*?)\\n\\};`,
  ));
  if (!match) {
    throw new Error(`missing generated Unicode range table: ${name}`);
  }

  return [...match[1].matchAll(/\{0x([0-9A-F]+)u,\s*0x([0-9A-F]+)u\},/g)]
    .map((range) => [parseInt(range[1], 16), parseInt(range[2], 16)]);
}

function excludeCodepoint(ranges, codepoint) {
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

function rustClassFromRanges(ranges) {
  return `[${ranges.map(([first, last]) =>
    first === last
      ? rustCodepoint(first)
      : `${rustCodepoint(first)}-${rustCodepoint(last)}`,
  ).join("")}]`;
}

const XID_START = rustClassFromRanges(generatedRanges("XID_START_RANGES"));
const MATH_XID_CONTINUE = rustClassFromRanges(
  excludeCodepoint(generatedRanges("XID_CONTINUE_RANGES"), 0x5F),
);
const IDENT_PATTERN =
  "(?:\\p{XID_Start}[\\p{XID_Continue}_-]*|_[\\p{XID_Continue}_-]+)";
const IDENT = new RustRegex(IDENT_PATTERN);
const FIELD_IDENT = new RustRegex(IDENT_PATTERN);
const MATH_FIELD_IDENT = new RustRegex(`${XID_START}${MATH_XID_CONTINUE}*`);
const LABEL_ID = new RustRegex("[\\p{XID_Continue}_-][\\p{XID_Continue}_.:-]*");
const REF_ID = new RustRegex(
  "[\\p{XID_Continue}_-](?:[\\p{XID_Continue}_.:-]*[\\p{XID_Continue}_-])?",
);
const MARKUP_WORDY = rustClassFromRanges(generatedRanges("MARKUP_WORDY_RANGES"));
const MARKUP_WORD_WITH_INTERNAL_MARKER = new RustRegex(
  `${MARKUP_WORDY}+(?:[_*]${MARKUP_WORDY}+)+`,
);
// Math delimiters and field identifiers use the same generated Unicode tables
// as the scanner, avoiding drift between grammar regexes and scanner helpers.
const MATH_OPEN_RANGES = generatedRanges("MATH_OPEN_RANGES");
const MATH_OPEN = new RustRegex(rustClassFromRanges(MATH_OPEN_RANGES));
const MATH_OPEN_NONPAREN = new RustRegex(
  rustClassFromRanges(excludeCodepoint(MATH_OPEN_RANGES, 0x28)),
);
const MATH_CLOSE = new RustRegex(
  rustClassFromRanges(generatedRanges("MATH_CLOSE_RANGES")),
);

const PREC = {
  assignment: 0,
  closure: 1,
  logicalOr: 2,
  logicalAnd: 3,
  logicalNot: 4,
  comparison: 5,
  addition: 6,
  multiplication: 7,
  sign: 8,
  postfix: 10,

  mathFraction: 1,
  mathAttachment: 2,
  mathRoot: 2,
  mathFactorial: 3,
  mathCall: 4,
};

const CLOSURE_ARROW = token(prec(10, "=>"));

function root($) {
  switch (ROOT_MODE) {
    case "code":
      return $.code;
    case "math":
      return $._math_document;
    default:
      return $._markup_document;
  }
}

function codeGap($) {
  return optional($._code_gap);
}

function closingCodeGap($) {
  // Distinguish a newline that leads to a closing delimiter from a newline
  // that can still lead to a comma, operator, field access, or next statement.
  return optional($._closing_code_gap);
}

function commaList($, item, {empty = true} = {}) {
  const list = seq(
    codeGap($),
    item,
    repeat(seq(
      codeGap($),
      ",",
      codeGap($),
      item,
    )),
    optional(seq(codeGap($), ",")),
    closingCodeGap($),
  );

  return empty ? choice(closingCodeGap($), list) : list;
}

function parenthesizedList($, item, {immediate = false, empty = true} = {}) {
  return seq(
    startToken("(", immediate),
    commaList($, item, {empty}),
    ")",
  );
}

function startToken(value, immediate = false) {
  return immediate ? token.immediate(value) : value;
}

const NL = Object.freeze({
  STOP: "stop",
  CONTEXTUAL: "contextual",
  CONTINUE: "continue",
});

const ROOT_TERMINATION = Object.freeze({
  NONE: "none",
  BY_LEADING_NODE: "by-leading-node",
});

// Code rules carry three independent policies through this context object:
//
//   newline:
//     - top/contextual code may continue only through guarded constructs such
//       as field access and `else`.
//     - delimited code may continue across physical newlines before operators,
//       commas, fields, and other expression tails.
//     - stopped code is used at embedded roots where a newline should return
//       control to markup/math instead of being absorbed by code.
//   atomic:
//     - embedded `#...` roots need stricter postfix adjacency so `#value.field`
//       stays one code node but spaced calls/fields hand control back cleanly.
//   rootTermination:
//     - leading-node embedded roots decide whether a marker statement needs an
//       explicit semicolon or scanner-provided boundary.
//
// Typst's parser can pass these policies at runtime. Tree-sitter rules are
// static, so this grammar materializes the newline policy as rule families.
// Keep these dimensions separate; merging them tends to break `#...` boundary
// recovery or make newlines valid in the wrong code context.
const CODE_CONTEXT = Object.freeze({
  top: {
    newline: NL.CONTEXTUAL,
    atomic: false,
    rootTermination: ROOT_TERMINATION.NONE,
  },
  delimited: {
    newline: NL.CONTINUE,
    atomic: false,
    rootTermination: ROOT_TERMINATION.NONE,
  },
  stopped: {
    newline: NL.STOP,
    atomic: false,
    rootTermination: ROOT_TERMINATION.NONE,
  },
  embeddedRoot: {
    newline: NL.STOP,
    atomic: true,
    rootTermination: ROOT_TERMINATION.BY_LEADING_NODE,
  },
});

function codeVariants(name, builder) {
  // For public code nodes that must exist in top, delimited, and stopped code.
  // The public rule uses contextual top-level newline behavior; hidden
  // `_continued_*` and `_stopped_*` siblings let callers select the same shape
  // under a different newline policy, then alias it back to the public node.
  //
  // The selected hidden rule changes which external scanner guards are valid,
  // because Tree-sitter exposes rule context to the scanner through
  // `valid_symbols`. Collapsing these variants into one permissive rule can
  // make imports, expressions, and postfix tails absorb newlines that should
  // terminate embedded code.
  return {
    [name]: ($) => builder($, CODE_CONTEXT.top),
    [`_continued_${name}`]: ($) => builder($, CODE_CONTEXT.delimited),
    [`_stopped_${name}`]: ($) => builder($, CODE_CONTEXT.stopped),
  };
}

function hiddenCodeVariants(name, builder) {
  // Same newline-family expansion as codeVariants, but for implementation
  // rules whose top-level spelling is already hidden (`_${name}`).
  return {
    [`_${name}`]: ($) => builder($, CODE_CONTEXT.top),
    [`_continued_${name}`]: ($) => builder($, CODE_CONTEXT.delimited),
    [`_stopped_${name}`]: ($) => builder($, CODE_CONTEXT.stopped),
  };
}

function codeGapFor($, context) {
  return context.newline === NL.CONTINUE ? [codeGap($)] : [];
}

function statementContinuationGapFor($, context) {
  // In stopped code, comments and horizontal spaces are extras and must not be
  // turned into a required gap. The newline policy is what prevents crossing a
  // physical line.
  return context.newline === NL.CONTINUE ? [codeGap($)] : [];
}

function expression($, context) {
  switch (context.newline) {
    case NL.CONTINUE:
      return $._continued_expression;
    case NL.STOP:
      return $._stopped_expression;
    default:
      return $._expression;
  }
}

function controlCondition($, context) {
  // Typst parses control conditions with the ordinary expression parser. A
  // condition-only precedence ladder drifted from normal code (`and` vs
  // comparison) and created incorrect trees for real programs.
  return expression($, context);
}

function postfixExpression($, context) {
  if (context.atomic) {
    // Atomic embedded roots must preserve `#value.field` adjacency. Ordinary
    // postfix rules allow code trivia in places where the marker-root parser
    // needs to stop and return control to markup/math.
    return $._atomic_postfix_expression;
  }

  switch (context.newline) {
    case NL.CONTINUE:
      return $._continued_postfix_expression;
    case NL.STOP:
      return $._stopped_postfix_expression;
    default:
      return $._postfix_expression;
  }
}

function contextRule($, context, name) {
  switch (context.newline) {
    case NL.CONTINUE:
      return $[`_continued_${name}`];
    case NL.STOP:
      return $[`_stopped_${name}`];
    default:
      return $[`_${name}`];
  }
}

function codeVariant($, context, name, publicName = name) {
  switch (context.newline) {
    case NL.CONTINUE:
      return alias($[`_continued_${name}`], $[publicName]);
    case NL.STOP:
      return alias($[`_stopped_${name}`], $[publicName]);
    default:
      return $[name];
  }
}

function codeOperator($, value, context, ahead) {
  const operator = field("operator", value);

  // Horizontal whitespace and comments are extras, so ordinary operator
  // tokens already accept them. Only a physical newline in NL.CONTINUE needs
  // a scanner guard; STOP and CONTEXTUAL must not continue before operators.
  // The guard is tier-specific because a single generic guard lets a higher
  // precedence tier shift before it knows whether the eventual operator
  // actually belongs to that tier.
  if (context.newline !== NL.CONTINUE) {
    return operator;
  }

  return choice(
    operator,
    seq(ahead, codeGap($), operator),
  );
}

function inlineOperator(value) {
  return field("operator", value);
}

function mathClose($) {
  const close = field(
    "close",
    alias($._math_close_delimiter, $.math_delimiter),
  );

  return choice(
    close,
    seq(mathCloseGap($), close),
  );
}

function mathCloseGap($) {
  return mathSpaceRun($, $._math_close_space);
}

function mathArgumentSeparatorGap($) {
  return mathSpaceRun($, $._math_argument_separator_space);
}

function mathSpaceRun($, first = $._math_space) {
  // Math spaces are branch selectors: the scanner says whether the trivia leads
  // to another expression, an attachment, a fraction, a close delimiter, or an
  // argument separator. Comments may sit inside that trivia, so every branch
  // that trusts the scanner must consume the same space/comment language.
  return seq(
    first,
    optional($._math_space_run_tail),
  );
}

function contentBlock($, {immediate = false} = {}) {
  return seq(
    startToken("[", immediate),
    optional(field("body", $._markup_document)),
    "]",
  );
}

function markupContent($, {requireLeadingSeparator = false} = {}) {
  const leading = requireLeadingSeparator
    ? repeat1($._markup_separator)
    : repeat($._markup_separator);

  return prec.right(choice(
    repeat1($._markup_separator),
    seq(
      leading,
      $._content_line,
      repeat(prec(1, seq(
        repeat1($._markup_separator),
        $._content_line,
      ))),
      optional($._trailing_markup_separators),
    ),
  ));
}

function sectionLabelTail($) {
  const comment = choice($.line_comment, $.block_comment);

  return seq(
    optional(field("label_separator", $._markup_space)),
    field("label", $.label),
    repeat(field("heading_suffix", $._markup_inline)),
    optional(field("comment", comment)),
  );
}

function sectionTrailingTail($) {
  const comment = choice($.line_comment, $.block_comment);

  return choice(
    seq(
      field("trailing", $._markup_space),
      optional(field("comment", comment)),
    ),
    field("comment", comment),
  );
}

function markupInlineSet($, {
  space = false,
  strong = true,
  emphasis = true,
  label = true,
  bracket,
} = {}) {
  return choice(
    $.text,
    ...(space ? [$._markup_space] : []),
    ...(strong ? [$.strong] : []),
    ...(emphasis ? [$.emphasis] : []),
    $.raw,
    $.automatic_link,
    ...(label ? [$.label] : []),
    $.reference,
    $.equation,
    $.embedded_code,
    $.shorthand,
    $.smart_quote,
    $.escape,
    $.linebreak,
    bracket,
  );
}

function bracketed($, item, {newlines = true, paragraphs = false} = {}) {
  return seq(
    "[",
    repeat(choice(
      item,
      ...(newlines ? [$._markup_newline] : []),
      ...(paragraphs ? [$.parbreak] : []),
    )),
    "]",
  );
}

function simpleListItem($, marker) {
  return seq(
    field("marker", marker),
    optional(field("separator", $._markup_space)),
    optional(field("body", $.list_body)),
    $._list_end,
  );
}

function arrayRule($) {
  return prec.dynamic(1, seq(
    "(",
    choice(
      closingCodeGap($),
      seq(codeGap($), $._array_body),
    ),
    ")",
  ));
}

function dictionaryRule($) {
  return seq(
    "(",
    codeGap($),
    $._dictionary_body,
    ")",
  );
}

function parametersRule($, {immediate = false} = {}) {
  return parenthesizedList($, $._parameter, {immediate});
}

function mathAttachmentOperator($, kind) {
  return kind === "subscript"
    ? $._math_subscript_operator
    : $._math_superscript_operator;
}

function mathAttachmentPart($, kind, operand) {
  return seq(
    mathAttachmentOperator($, kind),
    optional(mathSpaceRun($)),
    field(kind, operand),
  );
}

function mathPrimes($) {
  return field(
    "primes",
    alias(token.immediate(/'+/), $.math_primes),
  );
}

function fieldAccess($, object, context = CODE_CONTEXT.top, {immediate = false} = {}) {
  if (immediate) {
    // The external dot proves both sides of the atomic boundary: no trivia after
    // the receiver, and an actual identifier after the dot. `token.immediate`
    // alone cannot see that a skipped block comment separated receiver and dot.
    return prec.left(
      PREC.postfix,
      seq(
        field("object", object),
        alias($._atomic_field_dot, "."),
        field("field", alias(token.immediate(FIELD_IDENT), $.identifier)),
      ),
    );
  }

  return prec.left(
    PREC.postfix,
    choice(
      seq(
        field("object", object),
        ".",
        ...codeGapFor($, context),
        field("field", alias($._field_identifier, $.identifier)),
      ),
      // This guard is intentionally scanner-backed. Replacing it with a plain
      // `_code_newline` branch makes strict statement separators shift into a
      // speculative field access before the following token is known.
      ...(context.newline === NL.STOP ? [] : [seq(
          field("object", object),
          $._code_dot_ahead,
          codeGap($),
          ".",
          ...codeGapFor($, context),
          field("field", alias($._field_identifier, $.identifier)),
        )]),
    ),
  );
}

function functionCall($, value, args = $.arguments) {
  return prec.left(
    PREC.postfix,
    seq(
      field("function", value),
      field("arguments", args),
    ),
  );
}

function unaryExpression($, context) {
  return prec(
    PREC.sign,
    seq(
      inlineOperator(choice("+", "-", "−")),
      ...codeGapFor($, context),
      field("operand", contextRule($, context, "unary")),
    ),
  );
}

function logicalNotExpression($, context) {
  return prec.right(
    PREC.logicalNot,
    seq(
      inlineOperator("not"),
      ...codeGapFor($, context),
      field("operand", contextRule($, context, "logical_not")),
    ),
  );
}

function comparisonOperator($, context) {
  return choice(
    "==",
    "!=",
    "<",
    "<=",
    ">",
    ">=",
    "in",
    context.newline === NL.CONTINUE
      ? alias($._continued_not_in_operator, $.not_in_operator)
      : $.not_in_operator,
  );
}


function binaryTierNode(
  $,
  level,
  op,
  context,
  left,
  right,
  {
    rightAssociative = false,
    ahead = null,
  } = {},
) {
  const precedence = rightAssociative ? prec.right : prec.left;
  const operator = codeOperator($, op, context, ahead);

  return precedence(
    level,
    seq(
      field("left", left),
      operator,
      ...codeGapFor($, context),
      field("right", right),
    ),
  );
}

const CODE_EXPR_VARIANTS = Object.freeze([
  {
    key: "top",
    prefix: "",
    context: CODE_CONTEXT.top,
    aliasPublic: false,
  },
  {
    key: "continued",
    prefix: "_continued_",
    context: CODE_CONTEXT.delimited,
    aliasPublic: true,
  },
  {
    key: "stopped",
    prefix: "_stopped_",
    context: CODE_CONTEXT.stopped,
    aliasPublic: true,
  },
]);

const ASSIGNMENT_TIER = Object.freeze({
  name: "assignment",
  prec: PREC.assignment,
  operator: () => choice("=", "+=", "-=", "−=", "*=", "/="),
  left: "logical_or",
  right: "assignment",
  rightAssociative: true,
  ahead: "_code_assignment_operator_ahead",
});

const BINARY_TIERS = Object.freeze([
  {
    name: "logical_or",
    prec: PREC.logicalOr,
    operator: () => "or",
    left: "logical_or",
    right: "logical_and",
    ahead: "_code_logical_or_operator_ahead",
  },
  {
    name: "logical_and",
    prec: PREC.logicalAnd,
    operator: () => "and",
    left: "logical_and",
    right: "logical_not",
    ahead: "_code_logical_and_operator_ahead",
  },
  {
    name: "comparison",
    prec: PREC.comparison,
    operator: comparisonOperator,
    left: "comparison",
    right: "addition",
    ahead: "_code_comparison_operator_ahead",
  },
  {
    name: "addition",
    prec: PREC.addition,
    operator: () => choice("+", "-", "−"),
    left: "addition",
    right: "multiplication",
    ahead: "_code_addition_operator_ahead",
  },
  {
    name: "multiplication",
    prec: PREC.multiplication,
    operator: () => choice("*", "/"),
    left: "multiplication",
    right: "unary",
    ahead: "_code_multiplication_operator_ahead",
  },
]);

const LOW_BINARY_TIERS = Object.freeze(BINARY_TIERS.slice(0, 2));
const HIGH_BINARY_TIERS = Object.freeze(BINARY_TIERS.slice(2));
const OPERATOR_AHEAD_TIERS = Object.freeze([ASSIGNMENT_TIER, ...BINARY_TIERS]);

function operatorAhead($, tier) {
  return $[tier.ahead];
}

function operatorAheadExternals($) {
  return OPERATOR_AHEAD_TIERS.map((tier) => operatorAhead($, tier));
}

function hiddenVariantRuleName(variant, name) {
  return variant.prefix ? `${variant.prefix}${name}` : `_${name}`;
}

function codeVariantRuleName(variant, publicName) {
  return variant.prefix ? `${variant.prefix}${publicName}` : publicName;
}

function aliasForVariant($, variant, publicName) {
  const ruleName = codeVariantRuleName(variant, publicName);
  return variant.aliasPublic ? alias($[ruleName], $[publicName]) : $[publicName];
}

function binaryTierFromSpec($, context, tier) {
  return binaryTierNode(
    $,
    tier.prec,
    tier.operator($, context),
    context,
    contextRule($, context, tier.left),
    contextRule($, context, tier.right),
    {
      rightAssociative: Boolean(tier.rightAssociative),
      ahead: operatorAhead($, tier),
    },
  );
}

function variantByKey(key) {
  return CODE_EXPR_VARIANTS.find((variant) => variant.key === key);
}

function nonAssignmentRuleName(variant) {
  return hiddenVariantRuleName(variant, "non_assignment_expression");
}

function highExpressionRuleName(variant) {
  return hiddenVariantRuleName(variant, "high_expression");
}

function highBinaryRuleName(variant) {
  return hiddenVariantRuleName(variant, "high_binary_expression");
}

function noNewlineAssignmentNode($, variant) {
  return binaryTierNode(
    $,
    ASSIGNMENT_TIER.prec,
    ASSIGNMENT_TIER.operator($, variant.context),
    variant.context,
    $[nonAssignmentRuleName(variant)],
    $[hiddenVariantRuleName(variant, "assignment")],
    {
      rightAssociative: true,
      ahead: operatorAhead($, ASSIGNMENT_TIER),
    },
  );
}

function noNewlineLowBinaryExpressionNode($, variant) {
  return choice(...LOW_BINARY_TIERS.map((tier) => binaryTierNode(
    $,
    tier.prec,
    tier.operator($, variant.context),
    variant.context,
    $[nonAssignmentRuleName(variant)],
    $[nonAssignmentRuleName(variant)],
    {ahead: operatorAhead($, tier)},
  )));
}

function noNewlineHighBinaryExpressionNode($, variant) {
  return choice(...HIGH_BINARY_TIERS.map((tier) => binaryTierNode(
    $,
    tier.prec,
    tier.operator($, variant.context),
    variant.context,
    $[highExpressionRuleName(variant)],
    $[highExpressionRuleName(variant)],
    {ahead: operatorAhead($, tier)},
  )));
}

function assignmentExpressionForVariant($, variant) {
  if (variant.key === "top") {
    return $.assignment_expression;
  }
  if (variant.key === "continued") {
    return alias($._continued_assignment_expression, $.assignment_expression);
  }
  return alias(
    $._stopped_assignment_expression,
    $.assignment_expression,
  );
}

function assignmentFallbackForVariant($, variant) {
  return variant.key === "continued"
    ? $._continued_logical_or
    : $[nonAssignmentRuleName(variant)];
}

function assignmentEntry($, variant) {
  return choice(
    aliasForVariant($, variant, "closure"),
    aliasForVariant($, variant, "destructuring_assignment"),
    assignmentExpressionForVariant($, variant),
    assignmentFallbackForVariant($, variant),
  );
}

function binaryTierRules() {
  const rules = {};
  const top = variantByKey("top");
  const continued = variantByKey("continued");
  const stopped = variantByKey("stopped");

  for (const variant of CODE_EXPR_VARIANTS) {
    rules[hiddenVariantRuleName(variant, "assignment")] =
      ($) => assignmentEntry($, variant);
  }

  rules.assignment_expression = ($) => noNewlineAssignmentNode($, top);
  rules._continued_assignment_expression =
    ($) => binaryTierFromSpec($, CODE_CONTEXT.delimited, ASSIGNMENT_TIER);
  rules._stopped_assignment_expression =
    ($) => noNewlineAssignmentNode($, stopped);

  rules[nonAssignmentRuleName(top)] = ($) =>
    choice($.binary_expression, $._logical_not);
  rules[nonAssignmentRuleName(stopped)] = ($) =>
    choice(
      alias($._stopped_binary_expression, $.binary_expression),
      $._stopped_logical_not,
    );

  rules[highExpressionRuleName(top)] = ($) =>
    choice(alias($[highBinaryRuleName(top)], $.binary_expression), $._unary);
  rules[highExpressionRuleName(stopped)] = ($) =>
    choice(
      alias($[highBinaryRuleName(stopped)], $.binary_expression),
      $._stopped_unary,
    );

  rules.binary_expression = ($) =>
    choice(
      noNewlineLowBinaryExpressionNode($, top),
      $[highBinaryRuleName(top)],
    );
  rules[highBinaryRuleName(top)] =
    ($) => noNewlineHighBinaryExpressionNode($, top);
  rules._stopped_binary_expression = ($) =>
    choice(
      noNewlineLowBinaryExpressionNode($, stopped),
      $[highBinaryRuleName(stopped)],
    );
  rules[highBinaryRuleName(stopped)] =
    ($) => noNewlineHighBinaryExpressionNode($, stopped);

  for (const tier of BINARY_TIERS) {
    rules[hiddenVariantRuleName(continued, tier.name)] =
      ($) => choice(
        alias(
          $[hiddenVariantRuleName(continued, `${tier.name}_node`)],
          $.binary_expression,
        ),
        $[hiddenVariantRuleName(continued, tier.right)],
      );
    rules[hiddenVariantRuleName(continued, `${tier.name}_node`)] =
      ($) => binaryTierFromSpec($, continued.context, tier);
  }

  return rules;
}

function destructuringAssignment($, context) {
  return prec.dynamic(2, prec.right(
    PREC.assignment,
    seq(
      field(
        "pattern",
        choice($.discard_pattern, $.reassignment_pattern),
      ),
      codeOperator($, "=", context, operatorAhead($, ASSIGNMENT_TIER)),
      ...codeGapFor($, context),
      field("value", expression($, context)),
    ),
  ));
}

function namedDestructuringItem($, pattern) {
  return seq(
    field("key", $.identifier),
    codeGap($),
    ":",
    codeGap($),
    field("pattern", pattern),
  );
}

function destructuringSink($, pattern) {
  return seq(
    "..",
    codeGap($),
    optional(field("pattern", pattern)),
  );
}

function reassignmentPattern($) {
  // `(x) = value` is just assignment to a parenthesized expression in Typst.
  // Require real destructuring evidence: empty parens, a named item, a sink, or
  // a comma-separated shape.
  return prec.dynamic(3, choice(
    seq("(", closingCodeGap($), ")"),
    seq(
      "(",
      codeGap($),
      alias($._named_reassignment_item, $.named_destructuring_item),
      closingCodeGap($),
      ")",
    ),
    seq(
      "(",
      codeGap($),
      alias($._reassignment_sink, $.destructuring_sink),
      closingCodeGap($),
      ")",
    ),
    seq(
      "(",
      codeGap($),
      $._reassignment_item,
      codeGap($),
      ",",
      codeGap($),
      optional(seq(
        $._reassignment_item,
        repeat(seq(codeGap($), ",", codeGap($), $._reassignment_item)),
        optional(seq(codeGap($), ",")),
      )),
      closingCodeGap($),
      ")",
    ),
  ));
}

function closureExpression($, context) {
  return prec.right(
    PREC.closure,
    seq(
      field(
        "parameters",
        choice(
          $.identifier,
          $.discard_pattern,
          $.parameters,
        ),
      ),
      ...codeGapFor($, context),
      CLOSURE_ARROW,
      ...codeGapFor($, context),
      field("body", expression($, context)),
    ),
  );
}

function contextualExpression(
  $,
  body,
  context,
) {
  return prec.right(seq(
    "context",
    ...codeGapFor($, context),
    field("body", body),
  ));
}

function contextualExpressionRule($, context) {
  return contextualExpression($, expression($, context), context);
}

function controlBodyBoundary($, context) {
  return context.newline === NL.CONTINUE
    ? choice($._code_control_body_ahead, repeat1($._code_newline))
    : $._code_control_body_ahead;
}

function controlBody($) {
  return choice($.code_block, $.content_block);
}

function whileLoop(
  $,
  context,
) {
  return prec.dynamic(1, seq(
    "while",
    ...codeGapFor($, context),
    field("condition", controlCondition($, context)),
    controlBodyBoundary($, context),
    field("body", controlBody($)),
  ));
}

function forLoop(
  $,
  context,
) {
  return prec.dynamic(1, seq(
    "for",
    ...codeGapFor($, context),
    field("pattern", $._binding_pattern),
    ...codeGapFor($, context),
    "in",
    ...codeGapFor($, context),
    field("iterable", controlCondition($, context)),
    controlBodyBoundary($, context),
    field("body", controlBody($)),
  ));
}

function dottedIdentifierPath($, context, {
  headField,
  tailField,
} = {}) {
  const head = headField
    ? field(headField, $.identifier)
    : $.identifier;
  const tail = tailField
    ? field(tailField, alias($._field_identifier, $.identifier))
    : alias($._field_identifier, $.identifier);

  if (context.newline === NL.CONTINUE) {
    return seq(
      head,
      repeat(seq(
        codeGap($),
        ".",
        codeGap($),
        tail,
      )),
    );
  }

  const sameLineTail = seq(".", tail);

  if (context.newline === NL.STOP) {
    return seq(head, repeat(sameLineTail));
  }

  return seq(
    head,
    repeat(choice(
      sameLineTail,
      seq(
        $._code_dot_ahead,
        codeGap($),
        ".",
        tail,
      ),
    )),
  );
}

function dottedPath($, context) {
  return dottedIdentifierPath($, context, {
    headField: "head",
    tailField: "tail",
  });
}

function includeRule(
  $,
  context,
) {
  return seq(
    "include",
    ...codeGapFor($, context),
    field("source", expression($, context)),
  );
}

function returnExpression(
  $,
  context,
  {allowBare = true} = {},
) {
  const value = field("value", expression($, context));

  return prec.right(seq(
    "return",
    ...codeGapFor($, context),
    allowBare ? optional(value) : value,
  ));
}

function letBinding(
  $,
  context,
  {allowBare = true} = {},
) {
  const valueSuffix = choice(
    prec.dynamic(1, seq(
      field(
        "parameters",
        alias($._immediate_parameters, $.parameters),
      ),
      ...codeGapFor($, context),
      "=",
      ...codeGapFor($, context),
      field("value", expression($, context)),
    )),
    prec.dynamic(1, seq(
      ...codeGapFor($, context),
      "=",
      ...codeGapFor($, context),
      field("value", expression($, context)),
    )),
  );

  return seq(
    "let",
    ...codeGapFor($, context),
    choice(
      seq(
        field("name", $.identifier),
        allowBare ? optional(valueSuffix) : valueSuffix,
      ),
      seq(
        field(
          "pattern",
          choice(
            $.discard_pattern,
            $.destructuring_pattern,
          ),
        ),
        ...codeGapFor($, context),
        "=",
        ...codeGapFor($, context),
        field("value", expression($, context)),
      ),
    ),
  );
}

function setTarget($, context) {
  return choice(
    $.identifier,
    alias(contextRule($, context, "set_target_field_access"), $.field_access),
  );
}

function setTargetFieldAccess($, context) {
  return fieldAccess($, contextRule($, context, "set_target"), context);
}

function setRule(
  $,
  context,
) {
  return seq(
    "set",
    ...codeGapFor($, context),
    field(
      "target",
      contextRule($, context, "set_target"),
    ),
    field("arguments", alias($._set_arguments, $.arguments)),
    optional(seq(
      ...statementContinuationGapFor($, context),
      "if",
      ...codeGapFor($, context),
      field("condition", expression($, context)),
    )),
  );
}

function showRule(
  $,
  context,
) {
  const transformation = showTransformation($, context);

  if (context.newline === NL.CONTINUE) {
    return seq(
      "show",
      ...codeGapFor($, context),
      choice(
        seq(
          ":",
          codeGap($),
          field("transformation", transformation),
        ),
        seq(
          field("selector", expression($, context)),
          codeGap($),
          ":",
          codeGap($),
          field("transformation", transformation),
        ),
      ),
    );
  }

  return seq(
    "show",
    optional(field("selector", expression($, context))),
    ":",
    field("transformation", transformation),
  );
}

function ifExpression(
  $,
  context,
) {
  const head = seq(
    "if",
    ...codeGapFor($, context),
    field("condition", controlCondition($, context)),
    controlBodyBoundary($, context),
    field("consequence", controlBody($)),
  );
  const alternative = field("alternative", elseClauseForContext($, context));

  return choice(
    prec.dynamic(2, prec.right(seq(head, alternative))),
    prec.dynamic(1, prec.right(head)),
  );
}

function elseKeyword($, context) {
  if (context.newline === NL.STOP) {
    return choice("else", seq($._code_else_space_ahead, codeGap($), "else"));
  }

  return choice(
    "else",
    // As with field access, the contextual newline before `else` needs a guard
    // so unrelated statement-separator newlines do not commit to this branch.
    seq($._code_else_ahead, codeGap($), "else"),
  );
}

function elseClauseForContext($, context) {
  switch (context.newline) {
    case NL.CONTINUE:
      return alias($._continued_else_clause, $.else_clause);
    case NL.STOP:
      return alias($._stopped_else_clause, $.else_clause);
    default:
      return $.else_clause;
  }
}

function elseClause($, context) {
  const nestedConditional = context.newline === NL.CONTINUE
    ? alias($._continued_if_expression, $.if_expression)
    : context.newline === NL.STOP
      ? alias($._stopped_if_expression, $.if_expression)
      : $.if_expression;

  return seq(
    elseKeyword($, context),
    ...codeGapFor($, context),
    choice(
      nestedConditional,
      prec.dynamic(1, seq($._code_space, nestedConditional)),
      seq(controlBodyBoundary($, context), field("body", controlBody($))),
    ),
  );
}

function embeddedIfExpression($) {
  const head = seq(
    "if",
    field("condition", $._expression),
    $._code_control_body_ahead,
    field("consequence", controlBody($)),
  );
  const alternative = field("alternative", alias($._embedded_else_clause, $.else_clause));

  return choice(
    prec.dynamic(2, prec.right(seq(head, alternative))),
    prec.dynamic(1, prec.right(head)),
  );
}

function embeddedElseClause($) {
  return seq(
    choice("else", seq($._code_else_space_ahead, codeGap($), "else")),
    choice(
      alias($._embedded_if_expression, $.if_expression),
      seq($._code_control_body_ahead, field("body", controlBody($))),
    ),
  );
}

function moduleImport(
  $,
  context,
) {
  if (context.newline === NL.CONTINUE) {
    return prec.right(seq(
      "import",
      codeGap($),
      field("source", $._continued_expression),
      optional($._continued_module_import_tail),
      optional($._code_space),
    ));
  }

  return prec.right(seq(
    "import",
    ...codeGapFor($, context),
    field("source", expression($, context)),
    optional(seq(
      ...statementContinuationGapFor($, context),
      optional($._code_space),
      "as",
      ...codeGapFor($, context),
      field("alias", $.identifier),
    )),
    optional(seq(
      ...codeGapFor($, context),
      optional($._code_space),
      ":",
      ...codeGapFor($, context),
      field(
        "imports",
        choice(
          $.wildcard_import,
          context.newline === NL.CONTINUE
            ? alias($._continued_import_list, $.import_list)
            : context.newline === NL.STOP
              ? alias($._stopped_import_list, $.import_list)
              : $.import_list,
          $.parenthesized_import_list,
        ),
      ),
    )),
    optional($._code_space),
  ));
}

function importItems($, context) {
  const item = context.newline === NL.CONTINUE
    ? alias($._continued_import_item, $.import_item)
    : context.newline === NL.STOP
      ? alias($._stopped_import_item, $.import_item)
      : $.import_item;

  if (context.newline === NL.CONTINUE) {
    return prec.right(seq(codeGap($), $._continued_import_list_body));
  }

  return prec.right(seq(
    item,
    repeat(seq(",", optional($._code_space), ...codeGapFor($, context), item)),
    optional(seq(",", optional($._code_space))),
  ));
}

function importItem($, context) {
  const item = seq(
    field(
      "path",
      context.newline === NL.CONTINUE
        ? alias($._continued_import_path, $.import_path)
        : context.newline === NL.STOP
          ? alias($._stopped_import_path, $.import_path)
          : $.import_path,
    ),
    optional(seq(
      ...statementContinuationGapFor($, context),
      optional($._code_space),
      "as",
      ...codeGapFor($, context),
      field("alias", $.identifier),
    )),
  );
  return prec.right(item);
}

function showTransformation($, context) {
  const value = expression($, context);
  const keyword = showKeywordTransformation($, context);
  return context.newline === NL.STOP
    ? choice(contextualKeywordExpression($), value)
    : choice(keyword, value);
}

function showKeywordTransformation($, context) {
  switch (context.newline) {
    case NL.CONTINUE:
      return choice(
        alias($._continued_set_rule, $.set_rule),
        alias($._continued_show_rule, $.show_rule),
        alias($._continued_let_binding, $.let_binding),
        alias($._continued_return_expression, $.return_expression),
      );
    case NL.STOP:
      return contextualKeywordExpression($);
    default:
      return choice(
        $.set_rule,
        $.show_rule,
        $.let_binding,
        $.return_expression,
      );
  }
}

function contextualKeywordExpression($) {
  return choice(
    alias($._stopped_value_let_binding, $.let_binding),
    codeVariant($, CODE_CONTEXT.stopped, "set_rule"),
    codeVariant($, CODE_CONTEXT.stopped, "show_rule"),
    alias($._stopped_value_return_expression, $.return_expression),
  );
}

function embeddedRootBody($, context) {
  if (context.rootTermination !== ROOT_TERMINATION.BY_LEADING_NODE) {
    return field("body", expression($, context));
  }

  return field("body", $._embedded_body);
}

export default grammar({
  name: NAMES[ROOT_MODE],

  externals: ($) => [
    $.shebang,
    $.block_comment,
    $._hash,
    $._embedded_statement_end,
    $.math_spread_operator,
    $._math_argument_identifier,

    $.heading_marker,
    $.bullet_list_marker,
    $.numbered_list_marker,
    $.term_list_marker,
    $.shorthand,
    $.automatic_link,
    $._list_continuation,
    $._list_end,

    // `unit` intentionally remains external. A grammar token.immediate rule
    // still lets global extras such as block comments intervene, so it would
    // incorrectly accept `12/*...*/pt` as one numeric literal.
    $.integer,
    $.float,
    $.unit,

    $.math_identifier,
    $._math_letter,
    $._math_text,
    $._math_fraction_ahead,
    $._math_fraction_space,
    $._math_expression_space,
    $._math_attachment_space,
    $._math_close_space,
    $._math_argument_separator_space,

    $._raw_open,
    $.raw_language,
    $.raw_content,
    $._raw_close,

    $._markup_indent,
    $._markup_space,
    $._markup_word_gap,
    $._markup_newline,
    $.parbreak,
    $._math_space,
    $._atomic_field_dot,
    $._code_dot_ahead,
    $._code_else_ahead,
    $._code_else_space_ahead,
    ...operatorAheadExternals($),
    $._code_close_ahead,
    $._code_argument_ahead,
    $._code_control_body_ahead,
    $._code_space,
    $._code_newline,
    // During broad recovery Tree-sitter can mark all external symbols valid.
    // This unused symbol lets the scanner decline context-sensitive scanning.
    $._error_sentinel,
  ],

  // Code horizontal whitespace is an external extra. The scanner emits it only
  // when visible markup/math whitespace is not valid. Code newlines remain
  // explicit because they terminate statements.
  //
  // Comments are global named extras. Their parent node is therefore incidental:
  // consumers should query `line_comment` and `block_comment` globally instead
  // of treating parentage as semantic ownership.
  extras: ($) => [
    $._code_space,
    $.line_comment,
    $.block_comment,
  ],

  // Tree-sitter's keyword-extraction `word` directive is for code identifiers.
  // Markup prose words use the hidden `_word` rule below so text stays flat.
  word: ($) => $.identifier,

  supertypes: ($) => [
    $._expression,
    $._literal,
    $._math_expression,
    $._math_atom,
  ],

  conflicts: ($) => [
    [
      $._primary_expression,
      $.named_parameter,
      $._named_reassignment_item,
    ],
    [
      $._primary_expression,
      $.named_parameter,
      $.named_destructuring_item,
      $._named_reassignment_item,
    ],
    [$._primary_expression, $._reassignment_pattern],
    [$._primary_expression, $._named_reassignment_item],
    [$._primary_expression, $._binding_pattern],
    [$._primary_expression, $._binding_pattern, $._reassignment_pattern],
    [$._binding_pattern, $._reassignment_pattern],
    [$._reassignment_pattern, $._named_reassignment_item],
    [$._continued_postfix_expression, $._reassignment_pattern],
    [$._continued_postfix_expression, $._reassignment_sink],
    [$._primary_expression, $._reassignment_sink],
    [$._primary_expression, $.sink_parameter, $._reassignment_sink],
    [
      $._primary_expression,
      $.sink_parameter,
      $.destructuring_sink,
      $._reassignment_sink,
    ],
    [$._continued_assignment, $._continued_assignment_expression],
    [$._assignment, $.assignment_expression],
    [$._stopped_assignment, $._stopped_assignment_expression],
    [$._high_expression, $.binary_expression],
    [$._stopped_high_expression, $._stopped_binary_expression],
    [$._continued_else_clause],
    [$._continued_let_binding],
    [$._continued_set_rule],
    // These parenthesized forms intentionally remain distinct public nodes.
    // Queries and corpus fixtures rely on the separate CST shapes, so these
    // conflicts are the cost of keeping that precision.
    [$.array, $.parameters],
    [$.array, $.parameters, $.reassignment_pattern],
    [$.array, $.parameters, $.destructuring_pattern, $.reassignment_pattern],
    [$.array, $.destructuring_pattern],
    [$.array, $.reassignment_pattern],
    [$.array, $.destructuring_pattern, $.reassignment_pattern],
    [$._array_item, $._dictionary_body],
    [$._binding_pattern, $.named_destructuring_item],
    [$.named_parameter, $._binding_pattern],
    [$.sink_parameter],
    [$.sink_parameter, $._reassignment_sink],
    [$.sink_parameter, $.destructuring_sink, $._reassignment_sink],
    [$.destructuring_sink],
    [$._reassignment_sink],
    [$._parameter, $._destructuring_item],
    [$._continued_import_path],
    [$._continued_import_list],
    [$.heading_body],
  ],

  rules: {
    source_file: ($) => seq(optional($.shebang), optional(root($))),

    _code_gap: ($) => repeat1($._code_newline),

    _closing_code_gap: ($) =>
      prec.right(seq(
        $._code_close_ahead,
        repeat(choice($._code_newline, $._code_space)),
      )),

    _math_space_run_tail: ($) =>
      repeat1(seq(
        choice($.line_comment, $.block_comment),
        optional($._math_space),
      )),

    line_comment: (_) =>
      token(seq(
        "//",
        /[^\r\n\v\f\u0085\u2028\u2029]*/,
      )),

    // Markup mode

    _markup_separator: ($) =>
      choice(
        $._markup_newline,
        $.parbreak,
      ),

    _trailing_markup_separators: ($) =>
      prec.left(-1, repeat1($._markup_separator)),

    _markup_document: ($) =>
      choice(
        $.content,
        prec.right(seq(
          optional($.content),
          repeat1($.section),
        )),
      ),

    content: ($) => markupContent($),

    _section_content: ($) =>
      markupContent($, {requireLeadingSeparator: true}),

    _content_line: ($) =>
      choice(
        prec(1, seq(
          optional($._markup_indent),
          $._content_line_body,
        )),
        $._markup_indent,
      ),

    _content_line_body: ($) =>
      choice(
        $.bullet_list_item,
        $.numbered_list_item,
        $.term_list_item,
        $._inline_run,
      ),

    _inline_run: ($) => repeat1($._markup_inline),

    _markup_inline: ($) =>
      prec.right(choice(
        seq($._markup_space, $._markup_nonspace_inline),
        $._markup_space,
        $._markup_nonspace_inline,
      )),

    _markup_nonspace_inline: ($) =>
      markupInlineSet($, {bracket: $.bracketed_text}),

    // Used after a syntactic marker-space that is represented separately in the
    // tree. Requiring a non-space first token prevents that same whitespace from
    // being parsed either as marker trivia or as the first item-body token.
    _list_inline_body: ($) =>
      seq(
        $._markup_nonspace_inline,
        repeat($._markup_inline),
      ),

    list_body: ($) =>
      seq(
        $._list_body_segment,
        repeat(seq(
          $._list_continuation_gap,
          repeat(choice($.line_comment, $.block_comment)),
          optional($._list_body_segment),
        )),
      ),

    _list_continuation_gap: ($) =>
      // The scanner only validates indentation and leaves the actual newline or
      // parbreak to markup rules. That keeps blank-line paragraph boundaries
      // visible inside list items instead of hiding them in a continuation token.
      seq(
        $._list_continuation,
        $._markup_separator,
        optional($._markup_indent),
      ),

    _list_body_segment: ($) =>
      choice(
        $._list_inline_body,
        $._heading_line,
        $.bullet_list_item,
        $.numbered_list_item,
        $.term_list_item,
      ),

    text: ($) =>
      // `_word` stays hidden so prose is one text run rather than one public
      // child per word. The internal split remains useful because spaces can be
      // either ordinary text gaps or the start of another inline construct.
      prec.right(seq(
        $._word,
        repeat(seq($._markup_word_gap, $._word)),
      )),

    // The high-precedence alternative keeps word-internal underscores and
    // stars out of emphasis parsing without scanner-maintained previous-token
    // state. Typst excludes CJK and Korean scripts from this word-boundary
    // protection.
    _word: (_) =>
      choice(
        token(prec(3, MARKUP_WORD_WITH_INTERNAL_MARKER)),
        token(prec(-1, /[^ \t\r\n\v\f\u0085\u2028\u2029\\`$#<@*_\'"\[\]~:]+/)),
        token(prec(-3, /[<@*_\[~`$:]/)),
      ),

    // General markup brackets may contain arbitrary markup and paragraph
    // breaks. More restrictive bracket rules below preserve the newline policy
    // of headings and emphasis constructs.
    bracketed_text: ($) =>
      bracketed($, $._markup_inline, {paragraphs: true}),

    heading: ($) =>
      prec.right(seq(
        field("marker", $.heading_marker),
        optional(choice(
          seq(
            field("separator", $._markup_space),
            optional(seq(
              field("body", $.heading_body),
            )),
          ),
          seq(
            $.block_comment,
            optional(seq(
              optional(field("separator", $._markup_space)),
              field("body", $.heading_body),
            )),
          ),
        )),
      )),

    section: ($) =>
      choice(
        prec.dynamic(3, prec.right(2, seq(
          optional($._markup_indent),
          field("heading", $.heading),
          sectionLabelTail($),
          optional(field("body", alias($._section_content, $.content))),
        ))),
        prec.dynamic(2, prec.right(2, seq(
          optional($._markup_indent),
          field("heading", $.heading),
          optional(sectionTrailingTail($)),
          optional(field("body", alias($._section_content, $.content))),
        ))),
      ),

    _heading_line: ($) =>
      choice(
        prec.dynamic(2, seq(
          field("heading", $.heading),
          sectionLabelTail($),
        )),
        seq(
          field("heading", $.heading),
          optional(sectionTrailingTail($)),
        ),
      ),

    // Keep trailing whitespace and labels outside the heading. Internal spaces
    // remain part of the body. Heading-specific square brackets cannot consume
    // a physical newline.
    heading_body: ($) =>
      seq(
        $._heading_nonspace,
        repeat(choice(
          $._heading_nonspace,
          seq($._markup_space, $._heading_nonspace),
        )),
      ),

    _heading_nonspace: ($) =>
      markupInlineSet($, {
        label: false,
        bracket: alias($._heading_bracketed_text, $.bracketed_text),
      }),

    _heading_bracketed_text: ($) =>
      bracketed($, choice($._heading_nonspace, $._markup_space), {
        newlines: false,
      }),

    bullet_list_item: ($) =>
      simpleListItem($, $.bullet_list_marker),

    numbered_list_item: ($) =>
      simpleListItem($, $.numbered_list_marker),

    term_list_item: ($) =>
      seq(
        field("marker", $.term_list_marker),
        optional(field("separator", $._markup_space)),
        optional(field("term", $._list_inline_body)),
        ":",
        optional(field("description_separator", $._markup_space)),
        optional(field("description", $.list_body)),
        $._list_end,
      ),

    strong: ($) =>
      prec.right(seq(
        "*",
        field(
          "body",
          repeat(choice(
            $._strong_inline,
            $._markup_newline,
          )),
        ),
        "*",
      )),

    // A delimiter does not recursively start the same construct. Square
    // brackets inside strong content may cross ordinary newlines, but never a
    // paragraph break.
    _strong_inline: ($) =>
      markupInlineSet($, {
        space: true,
        strong: false,
        bracket: alias($._strong_bracketed_text, $.bracketed_text),
      }),

    _strong_bracketed_text: ($) =>
      bracketed($, $._strong_inline),

    emphasis: ($) =>
      prec.right(seq(
        "_",
        field(
          "body",
          repeat(choice(
            $._emphasis_inline,
            $._markup_newline,
          )),
        ),
        "_",
      )),

    _emphasis_inline: ($) =>
      markupInlineSet($, {
        space: true,
        emphasis: false,
        bracket: alias($._emphasis_bracketed_text, $.bracketed_text),
      }),

    _emphasis_bracketed_text: ($) =>
      bracketed($, $._emphasis_inline),

    raw: ($) =>
      seq(
        alias($._raw_open, $.raw_delimiter),
        optional(field("language", $.raw_language)),
        optional(field("content", $.raw_content)),
        alias($._raw_close, $.raw_delimiter),
      ),

    label: (_) => token(seq("<", LABEL_ID, ">")),

    reference: ($) =>
      seq(
        "@",
        field("target", alias(token.immediate(REF_ID), $.identifier)),
        optional(field(
          "supplement",
          alias(contentBlock($, {immediate: true}), $.content_block),
        )),
      ),

    smart_quote: (_) => choice("'", '"'),

    escape: (_) =>
      token(choice(
        /\\u\{[0-9A-Fa-f]+\}/,
        /\\[^\s]/,
      )),

    linebreak: (_) => "\\",

    // Cross-mode transitions

    // Keep this boundary node even though the `#` token is anonymous: it owns
    // the complete source range of the markup/math-to-code transition and gives
    // queries a stable way to distinguish embedded code from code-block code.
    embedded_code: ($) =>
      prec.dynamic(1, seq(
        alias($._hash, "#"),
        embeddedRootBody($, CODE_CONTEXT.embeddedRoot),
      )),

    content_block: ($) => contentBlock($),

    _immediate_content_block: ($) =>
      contentBlock($, {immediate: true}),

    // Typst's official CST uses one equation node. Keep trailing math space on
    // the equation instead of the body so the closing dollar remains visible.
    equation: ($) =>
      seq(
        "$",
        optional(field("body", $.math)),
        optional(mathSpaceRun($)),
        "$",
      ),

    // Code mode

    code: ($) => $._code_body,

    _code_body: ($) =>
      choice(
        // Blank code regions may contain newlines, but a standalone semicolon is
        // recovery input rather than an empty statement.
        repeat1($._code_newline),
        prec.right(seq(
          repeat($._code_newline),
          $._code_item,
          repeat(seq($._code_separator, $._code_item)),
          optional($._code_separator),
        )),
      ),

    _code_block_body: ($) =>
      choice(
        // Blank code blocks may contain newlines, but they should not expose an
        // empty wrapper or separator as a public body child.
        repeat1($._code_newline),
        prec.right(seq(
          repeat($._code_newline),
          field("body", $._code_item),
          repeat(seq($._code_separator, field("body", $._code_item))),
          optional($._code_separator),
        )),
      ),

    _code_separator: ($) =>
      choice(
        repeat1($._code_newline),
        seq(";", repeat($._code_newline)),
      ),

    _code_item: ($) => $._code_statement,

    // Editor policy: let/set/show/import/return are code statements, not
    // general expression operands. Keep explicit value-like exceptions local:
    // show transformations, embedded roots, and continued `include` values
    // such as `outline: include "OUTLINE.typ"` in real packages.
    _code_statement: ($) =>
      choice(
        $._keyword_statement,
        $._expression,
      ),

    _keyword_statement: ($) => $._keyword_expression,

    _keyword_expression: ($) =>
      choice(
        $.let_binding,
        $.set_rule,
        $.show_rule,
        $.module_import,
        $.module_include,
        $.return_expression,
      ),

    _embedded_body: ($) =>
      choice(
        seq(
          $._embedded_keyword_statement,
          choice(";", $._embedded_statement_end),
        ),
        seq(
          $._atomic_postfix_expression,
          optional(token.immediate(";")),
        ),
      ),

    _embedded_keyword_statement: ($) =>
      choice(
        $.let_binding,
        $.set_rule,
        $.show_rule,
        $.module_import,
        $.module_include,
        $.return_expression,
      ),

    // Top-level/code-block expressions are newline-strict. The only contextual
    // continuations are a following dot and `else`. Delimited constructs use
    // `_continued_expression`, which mirrors Typst's AtNewline::Continue mode.
    _expression: ($) => $._assignment,

    _continued_expression: ($) => $._continued_assignment,

    _stopped_expression: ($) => $._stopped_assignment,

    _postfix_expression: ($) =>
      choice(
        prec(PREC.postfix, $._postfix_base),
        $.field_access,
        $.function_call,
      ),

    _stopped_postfix_expression: ($) =>
      choice(
        prec(PREC.postfix, $._stopped_postfix_base),
        alias($._stopped_field_access, $.field_access),
        alias($._stopped_function_call, $.function_call),
      ),

    _atomic_postfix_expression: ($) =>
      choice(
        prec(PREC.postfix, $._atomic_postfix_base),
        alias($._atomic_field_access, $.field_access),
        alias($._atomic_function_call, $.function_call),
      ),

    _continued_postfix_expression: ($) =>
      choice(
        prec(PREC.postfix, $._continued_postfix_base),
        alias($._continued_field_access, $.field_access),
        alias($._continued_function_call, $.function_call),
      ),

    _postfix_base: ($) =>
      choice(
        $._primary_expression,
        $.if_expression,
        $.while_loop,
        $.for_loop,
        $.contextual_expression,
        $.break_expression,
        $.continue_expression,
      ),

    _continued_postfix_base: ($) =>
      choice(
        $._primary_expression,
        alias($._continued_module_include, $.module_include),
        alias($._continued_if_expression, $.if_expression),
        alias($._continued_while_loop, $.while_loop),
        alias($._continued_for_loop, $.for_loop),
        alias($._continued_contextual_expression, $.contextual_expression),
        $.break_expression,
        $.continue_expression,
      ),

    _stopped_postfix_base: ($) =>
      choice(
        $._primary_expression,
        alias($._stopped_if_expression, $.if_expression),
        alias($._stopped_while_loop, $.while_loop),
        alias($._stopped_for_loop, $.for_loop),
        alias($._stopped_contextual_expression, $.contextual_expression),
        $.break_expression,
        $.continue_expression,
      ),

    _atomic_postfix_base: ($) =>
      choice(
        $._primary_expression,
        alias($._embedded_if_expression, $.if_expression),
        $.while_loop,
        $.for_loop,
        $.contextual_expression,
        $.break_expression,
        $.continue_expression,
      ),

    _primary_expression: ($) =>
      choice(
        $.identifier,
        $._literal,
        $.raw,
        $.code_block,
        $.content_block,
        $.parenthesized_expression,
        $.array,
        $.dictionary,
        $.equation,
      ),

    _literal: ($) =>
      choice(
        $.none,
        $.auto,
        $.boolean,
        $.numeric,
        $.integer,
        $.float,
        $.string,
        $.label,
      ),

    identifier: (_) => token(IDENT),
    _field_identifier: (_) => token(prec(4, FIELD_IDENT)),

    none: (_) => "none",
    auto: (_) => "auto",
    boolean: (_) => choice("true", "false"),
    numeric: ($) =>
      prec(1, seq(
        field("value", choice($.integer, $.float)),
        field("unit", $.unit),
      )),

    string: ($) =>
      seq(
        '"',
        repeat(choice($.string_content, $.string_escape)),
        '"',
      ),

    string_content: (_) => token.immediate(prec(2, /[^"\\]+/)),
    string_escape: (_) =>
      token.immediate(choice(
        /\\u\{[0-9A-Fa-f]+\}/,
        /\\\r\n/,
        /\\[\n\r\v\f\u0085\u2028\u2029]/,
        /\\./,
      )),

    code_block: ($) =>
      seq(
        "{",
        optional(prec.dynamic(1, $._code_block_body)),
        closingCodeGap($),
        "}",
      ),

    parenthesized_expression: ($) =>
      prec.dynamic(2, seq(
          "(",
          codeGap($),
          field("expression", $._continued_expression),
          closingCodeGap($),
          ")",
        )),

    // `()` is an empty array. A non-empty array must either begin with a
    // spread or contain a comma; `(value)` remains parenthesized.
    array: ($) => arrayRule($),

    _array_item: ($) => choice($.spread, $._continued_expression),

    _array_body: ($) =>
      choice(
        seq(
          $.spread,
          repeat(seq(codeGap($), ",", codeGap($), $._array_item)),
          optional(seq(codeGap($), ",")),
          closingCodeGap($),
        ),
        seq(
          $._continued_expression,
          codeGap($),
          ",",
          codeGap($),
          optional(seq(
            $._array_item,
            repeat(seq(codeGap($), ",", codeGap($), $._array_item)),
            optional(seq(codeGap($), ",")),
            closingCodeGap($),
          )),
        ),
      ),

    dictionary: ($) => dictionaryRule($),

    _dictionary_item: ($) => choice($.dictionary_entry, $.spread),

    _dictionary_body: ($) =>
      choice(
        seq(
          ":",
          commaList($, $._dictionary_item),
        ),
        seq(
          $.spread,
          repeat(seq(codeGap($), ",", codeGap($), $.spread)),
          codeGap($),
          ",",
          codeGap($),
          $.dictionary_entry,
          repeat(seq(codeGap($), ",", codeGap($), $._dictionary_item)),
          optional(seq(codeGap($), ",")),
          closingCodeGap($),
        ),
        seq(
          $.dictionary_entry,
          repeat(seq(codeGap($), ",", codeGap($), $._dictionary_item)),
          optional(seq(codeGap($), ",")),
          closingCodeGap($),
        ),
      ),

    dictionary_entry: ($) =>
      prec(1, seq(
        field("key", $._continued_expression),
        codeGap($),
        ":",
        codeGap($),
        field("value", $._continued_expression),
      )),

    spread: ($) =>
      prec(
        PREC.postfix,
        seq(
          "..",
          codeGap($),
          field("value", $._continued_expression),
        ),
      ),

    // Ordinary code permits trivia around a dot. At a top-level newline, a
    // following dot is the one contextual continuation recognized by Typst.
    ...codeVariants(
      "field_access",
      ($, context) => fieldAccess($, postfixExpression($, context), context),
    ),

    _atomic_field_access: ($) =>
      fieldAccess(
        $,
        $._atomic_postfix_expression,
        CODE_CONTEXT.stopped,
        {immediate: true},
      ),

    ...codeVariants(
      "function_call",
      ($, context) => functionCall($, postfixExpression($, context)),
    ),

    _atomic_function_call: ($) =>
      functionCall($, $._atomic_postfix_expression),

    arguments: ($) =>
      prec.right(choice(
        prec.dynamic(1, seq(
          $._code_argument_ahead,
          $._parenthesized_arguments,
          repeat1($._content_argument),
        )),
        seq($._code_argument_ahead, $._parenthesized_arguments),
        repeat1($._content_argument),
      )),

    _content_argument: ($) =>
      seq(
        $._code_argument_ahead,
        alias($._immediate_content_block, $.content_block),
      ),

    _set_arguments: ($) =>
      seq($._code_argument_ahead, $._parenthesized_arguments),

    _parenthesized_arguments: ($) =>
      seq(
        token.immediate("("),
        choice(
          closingCodeGap($),
          seq(codeGap($), $._argument_body),
        ),
        ")",
      ),

    _argument_body: ($) =>
      seq(
        $._continued_argument,
        choice(
          closingCodeGap($),
          $._argument_comma_tail,
        ),
      ),

    _argument_comma_tail: ($) =>
      seq(
        codeGap($),
        ",",
        codeGap($),
        choice(
          closingCodeGap($),
          seq(
            $._continued_argument,
            repeat(seq(codeGap($), ",", codeGap($), $._continued_argument)),
            optional(seq(codeGap($), ",")),
            closingCodeGap($),
          ),
        ),
      ),

    _continued_argument: ($) =>
      choice(
        $.named_argument,
        $.spread_argument,
        prec(1, $._continued_expression),
      ),

    named_argument: ($) =>
      prec.dynamic(1, prec(1, seq(
        field("name", $.identifier),
        codeGap($),
        ":",
        codeGap($),
        field("value", $._continued_expression),
      ))),

    spread_argument: ($) =>
      seq(
        "..",
        codeGap($),
        field("value", $._continued_expression),
      ),

    ...codeVariants("unary_expression", unaryExpression),

    ...codeVariants("logical_not_expression", logicalNotExpression),

    not_in_operator: (_) => seq("not", "in"),

    _continued_not_in_operator: ($) => seq("not", codeGap($), "in"),

    ...codeVariants("destructuring_assignment", destructuringAssignment),

    ...binaryTierRules(),

    _logical_not: ($) =>
      choice(
        $.logical_not_expression,
        $._high_expression,
      ),

    _continued_logical_not: ($) =>
      choice(
        alias($._continued_logical_not_expression, $.logical_not_expression),
        $._continued_comparison,
      ),

    _stopped_logical_not: ($) =>
      choice(
        alias($._stopped_logical_not_expression, $.logical_not_expression),
        $._stopped_high_expression,
      ),

    ...hiddenCodeVariants("unary", ($, context) => {
      return choice(
        context.newline === NL.CONTINUE
          ? alias($._continued_unary_expression, $.unary_expression)
          : context.newline === NL.STOP
            ? alias($._stopped_unary_expression, $.unary_expression)
            : $.unary_expression,
        postfixExpression($, context),
      );
    }),

    ...codeVariants("closure", closureExpression),

    parameters: ($) => parametersRule($),

    _parameter: ($) =>
      choice(
        $.named_parameter,
        $.sink_parameter,
        $._binding_pattern,
      ),

    named_parameter: ($) =>
      seq(
        field("name", $.identifier),
        codeGap($),
        ":",
        codeGap($),
        field("default", $._continued_expression),
      ),

    sink_parameter: ($) =>
      seq(
        "..",
        codeGap($),
        optional(field(
          "name",
          choice(
            $.identifier,
            $.discard_pattern,
          ),
        )),
      ),

    _binding_pattern: ($) =>
      choice(
        $.identifier,
        $.discard_pattern,
        $.destructuring_pattern,
      ),

    discard_pattern: (_) => "_",

    destructuring_pattern: ($) =>
      parenthesizedList($, $._destructuring_item),

    _destructuring_item: ($) =>
      choice(
        $._binding_pattern,
        $.named_destructuring_item,
        $.destructuring_sink,
      ),

    named_destructuring_item: ($) =>
      namedDestructuringItem($, $._binding_pattern),

    destructuring_sink: ($) =>
      destructuringSink($, choice($.identifier, $.discard_pattern)),

    reassignment_pattern: ($) => reassignmentPattern($),

    _reassignment_item: ($) =>
      choice(
        $._reassignment_pattern,
        alias($._named_reassignment_item, $.named_destructuring_item),
        alias($._reassignment_sink, $.destructuring_sink),
      ),

    _reassignment_pattern: ($) =>
      choice(
        $.identifier,
        $.discard_pattern,
        alias($._continued_field_access, $.field_access),
        $.reassignment_pattern,
      ),

    _named_reassignment_item: ($) =>
      namedDestructuringItem($, $._reassignment_pattern),

    _reassignment_sink: ($) =>
      destructuringSink($, choice(
        $.identifier,
        $.discard_pattern,
        alias($._continued_field_access, $.field_access),
      )),

    ...codeVariants("let_binding", letBinding),

    _stopped_value_let_binding: ($) =>
      letBinding($, CODE_CONTEXT.stopped, {allowBare: false}),

    _immediate_parameters: ($) =>
      parametersRule($, {immediate: true}),

    ...hiddenCodeVariants("set_target", setTarget),

    ...hiddenCodeVariants("set_target_field_access", setTargetFieldAccess),

    ...codeVariants("set_rule", setRule),

    ...codeVariants("show_rule", showRule),

    ...codeVariants("contextual_expression", contextualExpressionRule),

    ...codeVariants("if_expression", ifExpression),

    ...codeVariants("else_clause", elseClause),

    _embedded_if_expression: ($) => embeddedIfExpression($),

    _embedded_else_clause: ($) => embeddedElseClause($),

    ...codeVariants("while_loop", whileLoop),

    ...codeVariants("for_loop", forLoop),

    ...codeVariants("module_import", moduleImport),

    _continued_module_import_tail: ($) =>
      prec.right(choice(
        seq(
          $._continued_module_import_alias,
          optional($._continued_module_import_imports),
        ),
        $._continued_module_import_imports,
      )),

    _continued_module_import_alias: ($) =>
      seq(
        codeGap($),
        optional($._code_space),
        "as",
        codeGap($),
        field("alias", $.identifier),
      ),

    _continued_module_import_imports: ($) =>
      seq(
        codeGap($),
        optional($._code_space),
        ":",
        codeGap($),
        field(
          "imports",
          choice(
            $.wildcard_import,
            alias($._continued_import_list, $.import_list),
            $.parenthesized_import_list,
          ),
        ),
      ),

    wildcard_import: (_) => "*",

    ...codeVariants("import_list", importItems),

    _continued_import_list_body: ($) =>
      prec.right(seq(
        alias($._continued_import_item, $.import_item),
        repeat(seq(
          codeGap($),
          ",",
          codeGap($),
          alias($._continued_import_item, $.import_item),
        )),
        optional(seq(codeGap($), ",")),
        closingCodeGap($),
      )),

    parenthesized_import_list: ($) =>
      seq(
        "(",
        choice(
          closingCodeGap($),
          seq(codeGap($), $._parenthesized_import_body),
        ),
        ")",
      ),

    _parenthesized_import_body: ($) =>
      seq(
        alias($._continued_import_item, $.import_item),
        choice(
          closingCodeGap($),
          $._parenthesized_import_comma_tail,
        ),
      ),

    _parenthesized_import_comma_tail: ($) =>
      seq(
        codeGap($),
        ",",
        codeGap($),
        choice(
          closingCodeGap($),
          seq(
            alias($._continued_import_item, $.import_item),
            repeat(seq(
              codeGap($),
              ",",
              codeGap($),
              alias($._continued_import_item, $.import_item),
            )),
            optional(seq(codeGap($), ",")),
            closingCodeGap($),
          ),
        ),
      ),

    ...codeVariants("import_item", importItem),

    ...codeVariants("import_path", dottedPath),

    ...codeVariants("module_include", includeRule),

    break_expression: (_) => "break",
    continue_expression: (_) => "continue",

    // A newline after `return` terminates the top-level statement. Delimited
    // continued contexts may carry a value across newlines.
    ...codeVariants("return_expression", returnExpression),

    _stopped_value_return_expression: ($) =>
      returnExpression($, CODE_CONTEXT.stopped, {allowBare: false}),

    // Math mode

    _math_document: ($) =>
      seq($.math, optional(mathSpaceRun($))),

    math: ($) =>
      prec.right(choice(
        mathSpaceRun($),
        seq(
          optional(mathSpaceRun($)),
          $._math_items,
        ),
      )),

    // Adjacent atoms need no separator. Spaced atoms are preceded by a
    // zero-width lookahead token, so spaces before a closing delimiter remain
    // available to the enclosing construct instead of committing to another
    // expression.
    _math_items: ($) =>
      seq(
        $._math_expression,
        repeat(choice(
          $._math_expression,
          seq(
            mathSpaceRun($, $._math_expression_space),
            $._math_expression,
          ),
        )),
      ),

    // Argument values exclude leading/trailing spaces; those are owned by the
    // argument list. Internal spaces use the same deterministic item sequence.
    math_sequence: ($) => $._math_items,

    _math_expression: ($) =>
      choice(
        $.math_fraction,
        alias($._math_prime_factorial, $.math_factorial),
        $._math_attach_expression,
      ),

    math_fraction: ($) =>
      prec.left(
        PREC.mathFraction,
        seq(
          field("numerator", $._math_expression),
          choice(
            seq($._math_fraction_ahead, "/"),
            seq(
              mathSpaceRun($, $._math_fraction_space),
              $._math_fraction_ahead,
              "/",
            ),
          ),
          optional(mathSpaceRun($)),
          // Parenthesized denominators are transparent grouping, not display
          // delimiters. Keep this distinct from `math_delimited` so queries and
          // highlighting can follow Typst's grouping-vs-display distinction.
          field("denominator", choice($.math_group, $._math_attach_expression)),
        ),
      ),

    _math_attach_expression: ($) =>
      choice(
        $.math_attachment,
        $._math_postfix_expression,
      ),

    // Keep attachment forms explicit rather than flattening them into one
    // repeated cluster. The extra rules preserve editor-visible grouping for
    // same-kind chains (`a_b_c`, `a^b^c`), paired order (`a_b^c`, `a^b_c`),
    // prime-bearing operands (`a^b'_c^d`), and prime factorials (`a'!`).
    //
    // Hat/underscore attachments permit math trivia before the operator only
    // when the operator is actually ahead, so trailing math spaces stay
    // available to the enclosing sequence or delimiter.
    math_attachment: ($) =>
      choice(
        prec.left(
          PREC.mathAttachment,
          seq(
            field("base", $.math_attachment),
            $._math_single_attachment_suffix,
          ),
        ),
        prec.right(
          PREC.mathAttachment + 1,
          seq(
            field("base", $._math_postfix_expression),
            $._math_exact_paired_attachment_suffix,
            optional(mathPrimes($)),
          ),
        ),
        prec.right(
          PREC.mathAttachment + 1,
          seq(
            field("base", $._math_postfix_expression),
            mathPrimes($),
            $._math_exact_paired_attachment_suffix,
          ),
        ),
        prec.right(
          PREC.mathAttachment,
          choice(
            seq(
              field("base", $._math_postfix_expression),
              $._math_single_attachment_suffix,
              optional(mathPrimes($)),
            ),
            seq(
              field("base", $._math_postfix_expression),
              mathPrimes($),
              optional($._math_subscript_suffix),
              optional($._math_superscript_suffix),
            ),
          ),
        ),
      ),

    _math_subscript_suffix: ($) =>
      mathAttachmentPart($, "subscript", $._math_attach_expression),

    _math_superscript_suffix: ($) =>
      mathAttachmentPart($, "superscript", $._math_attach_expression),

    _math_exact_subscript_suffix: ($) =>
      mathAttachmentPart($, "subscript", $._math_subscript_operand),

    _math_exact_superscript_suffix: ($) =>
      mathAttachmentPart($, "superscript", $._math_superscript_operand),

    _math_single_attachment_suffix: ($) =>
      choice(
        $._math_subscript_suffix,
        $._math_superscript_suffix,
      ),

    _math_exact_paired_attachment_suffix: ($) =>
      choice(
        seq($._math_exact_subscript_suffix, $._math_exact_superscript_suffix),
        seq($._math_exact_superscript_suffix, $._math_exact_subscript_suffix),
      ),

    _math_subscript_operand: ($) =>
      choice(
        alias($._math_subscript_chain, $.math_attachment),
        alias($._math_prime_subscript_chain, $.math_attachment),
        alias($._math_prime_only_attachment, $.math_attachment),
        prec(PREC.mathAttachment + 2, $._math_postfix_expression),
      ),

    _math_subscript_chain: ($) =>
      prec.right(
        PREC.mathAttachment,
        seq(
          field("base", $._math_postfix_expression),
          $._math_exact_subscript_suffix,
          optional(mathPrimes($)),
        ),
      ),

    _math_prime_subscript_chain: ($) =>
      prec.right(
        PREC.mathAttachment,
        seq(
          field("base", $._math_postfix_expression),
          mathPrimes($),
          $._math_exact_subscript_suffix,
        ),
      ),

    _math_superscript_operand: ($) =>
      choice(
        alias($._math_superscript_chain, $.math_attachment),
        alias($._math_prime_superscript_chain, $.math_attachment),
        alias($._math_prime_only_attachment, $.math_attachment),
        prec(PREC.mathAttachment + 2, $._math_postfix_expression),
      ),

    _math_prime_only_attachment: ($) =>
      prec.right(
        PREC.mathAttachment + 2,
        seq(
          field("base", $._math_postfix_expression),
          mathPrimes($),
        ),
      ),

    _math_superscript_chain: ($) =>
      prec.right(
        PREC.mathAttachment,
        seq(
          field("base", $._math_postfix_expression),
          $._math_exact_superscript_suffix,
          optional(mathPrimes($)),
        ),
      ),

    _math_prime_superscript_chain: ($) =>
      prec.right(
        PREC.mathAttachment,
        seq(
          field("base", $._math_postfix_expression),
          mathPrimes($),
          $._math_exact_superscript_suffix,
        ),
      ),

    _math_subscript_operator: ($) =>
      choice(
        "_",
        seq(
          mathSpaceRun($, $._math_attachment_space),
          "_",
        ),
      ),

    _math_superscript_operator: ($) =>
      choice(
        "^",
        seq(
          mathSpaceRun($, $._math_attachment_space),
          "^",
        ),
      ),

    _math_postfix_expression: ($) =>
      choice(
        $.math_factorial,
        $._math_prefix_expression,
      ),

    math_factorial: ($) =>
      prec.left(
        PREC.mathFactorial,
        seq(
          field("operand", $._math_postfix_expression),
          token.immediate("!"),
        ),
      ),

    _math_prime_factorial: ($) =>
      prec.left(
        PREC.mathFactorial,
        seq(
          // Factorial binds to the prime-only attachment as its operand, so
          // `a'!` keeps the primes attached to `a` rather than becoming a loose
          // postfix sequence.
          field(
            "operand",
            alias($._math_prime_only_attachment, $.math_attachment),
          ),
          token.immediate("!"),
        ),
      ),

    _math_prefix_expression: ($) =>
      choice(
        $.math_root,
        $.math_call,
        $.math_application,
        $.math_field_access,
        $.math_delimited,
        $._math_atom,
      ),

    math_root: ($) =>
      prec.right(
        PREC.mathRoot,
        seq(
          field("operator", choice("√", "∛", "∜")),
          optional(mathSpaceRun($)),
          field("radicand", $._math_attach_expression),
        ),
      ),

    _math_atom: ($) =>
      choice(
        $.math_identifier,
        alias($._math_letter, $.math_letter),
        alias($._math_text, $.math_text),
        $.math_number,
        $.math_text,
        $.math_shorthand,
        $.math_alignment_point,
        $.math_primes,
        $.string,
        $.escape,
        $.linebreak,
        $.embedded_code,
      ),

    // The editor-oriented scanner emits a single XID codepoint as `_math_letter`
    // and longer XID runs as `math_identifier`.
    math_number: (_) =>
      token(prec(
        2,
        new RustRegex("\\p{N}+(?:\\.\\p{N}+)?"),
      )),

    math_text: (_) =>
      choice(
        token(prec(
          -1,
          new RustRegex(
            "[^\\p{XID_Start}\\p{N}\\s$#_\\^/!'()\\[\\]{}|,;.&]",
          ),
        )),
        // `!` is a factorial only when it is directly adjacent to its operand.
        // With intervening trivia Typst treats it as ordinary math text.
        token(prec(-3, /[.,;()\[\]{}|!]/)),
      ),

    math_shorthand: (_) =>
      token(prec(
        3,
        choice(
          "==>",
          "=>",
          "->",
          "|->",
          "|=>",
          "->>",
          "-->",
          "~>",
          "~~>",
          "<==",
          "<-",
          "<<-",
          "<--",
          "<-<",
          "<~~",
          "<~",
          "<->",
          "<-->",
          "<=>",
          "<==>",
          ">->",
          ":=",
          "::=",
          "=:",
          "!=",
          "<=",
          "<<",
          "<<<",
          ">=",
          ">>",
          ">>>",
          "||",
          "|]",
          "...",
          "*",
          "-",
          "~",
        ),
      )),

    math_alignment_point: (_) => "&",
    math_primes: (_) => token(/'+/),

    math_field_access: ($) =>
      prec.left(
        PREC.mathCall,
        seq(
          field("object", choice($.math_identifier, $.math_field_access)),
          token.immediate("."),
          field(
            "field",
            alias(token.immediate(MATH_FIELD_IDENT), $.math_identifier),
          ),
        ),
      ),

    math_call: ($) =>
      prec(
        PREC.mathCall,
        seq(
          field("function", choice($.math_identifier, $.math_field_access)),
          field("arguments", $.math_arguments),
        ),
      ),

    math_arguments: ($) =>
      seq(
        token.immediate("("),
        optional(mathSpaceRun($)),
        optional(choice(
          $._math_argument_list,
          $._math_leading_empty_argument_list,
        )),
        ")",
      ),

    _math_argument_list: ($) =>
      seq(
        $._math_argument,
        repeat(seq(
          $._math_argument_separator,
          optional($._math_argument),
        )),
        optional(mathCloseGap($)),
      ),

    // A leading separator represents an empty first cell, as used by matrix-like
    // calls (`mat(, a)`). Empty trailing and interior cells are represented by
    // the optional argument after each separator.
    _math_leading_empty_argument_list: ($) =>
      seq(
        $._math_argument_separator,
        optional($._math_argument),
        repeat(seq(
          $._math_argument_separator,
          optional($._math_argument),
        )),
        optional(mathCloseGap($)),
      ),

    _math_argument_separator: ($) =>
      seq(
        optional(mathArgumentSeparatorGap($)),
        field("separator", choice(",", ";")),
        optional(mathSpaceRun($)),
      ),

    _math_argument: ($) =>
      choice(
        $.math_named_argument,
        $.math_spread_argument,
        $.math_sequence,
      ),

    // Named math arguments use ordinary code identifiers. In particular,
    // `x: value` is named even though lone `x` is math text outside this slot.
    math_named_argument: ($) =>
      prec(
        2,
        seq(
          field(
            "name",
            alias($._math_argument_identifier, $.identifier),
          ),
          token.immediate(":"),
          optional(mathSpaceRun($)),
          field("value", $.math_sequence),
        ),
      ),

    math_spread_argument: ($) =>
      seq(
        $.math_spread_operator,
        field("value", $.math_sequence),
      ),

    // Identifier/field plus immediate parentheses is always a math call.
    // Identifier applications therefore accept only non-parenthesis opening
    // delimiters; single alphabetic graphemes and other continuable atoms may
    // still apply to parentheses.
    math_application: ($) =>
      prec(
        PREC.mathCall,
        choice(
          seq(
            field(
              "function",
              choice(
                $.math_identifier,
                $.math_field_access,
              ),
            ),
            field(
              "argument",
              alias($._immediate_math_nonparen_delimited, $.math_delimited),
            ),
          ),
          seq(
            field(
              "function",
              choice(
                alias($._math_letter, $.math_letter),
                $.math_primes,
                $.string,
                $.escape,
              ),
            ),
            field(
              "argument",
              alias($._immediate_math_delimited, $.math_delimited),
            ),
          ),
        ),
      ),

    // A bare `|` is math text and `||` is a shorthand. Typst's paired vertical
    // delimiter is `[| ... |]`; it does not pair `|...|` or `||...||`.
    math_delimited: ($) =>
      seq(
        field("open", alias($._math_open_delimiter, $.math_delimiter)),
        optional(field("body", $.math)),
        mathClose($),
      ),

    math_group: ($) =>
      seq(
        field("open", alias("(", $.math_delimiter)),
        optional(field("body", $.math)),
        choice(
          field("close", alias(")", $.math_delimiter)),
          seq(
            mathCloseGap($),
            field("close", alias(")", $.math_delimiter)),
          ),
        ),
      ),

    _immediate_math_delimited: ($) =>
      seq(
        field(
          "open",
          alias(token.immediate(choice("[|", MATH_OPEN)), $.math_delimiter),
        ),
        optional(field("body", $.math)),
        mathClose($),
      ),

    _immediate_math_nonparen_delimited: ($) =>
      seq(
        field(
          "open",
          alias(
            token.immediate(choice("[|", MATH_OPEN_NONPAREN)),
            $.math_delimiter,
          ),
        ),
        optional(field("body", $.math)),
        mathClose($),
      ),

    _math_open_delimiter: (_) => token(choice("[|", MATH_OPEN)),
    _math_close_delimiter: (_) => token(prec(4, choice("|]", MATH_CLOSE))),
  },
});
