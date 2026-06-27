#!/usr/bin/env python3
"""Check generated Unicode tables against their source data."""
from __future__ import annotations

from pathlib import Path
import importlib.util
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
GENERATOR = ROOT / "scripts" / "generate-unicode-tables.py"
HEADER = ROOT / "src" / "unicode_tables.h"


def load_generator():
    spec = importlib.util.spec_from_file_location("unicode_table_generator", GENERATOR)
    if spec is None or spec.loader is None:
        raise SystemExit(f"could not load {GENERATOR}")
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def parse_header_ranges(text: str, name: str) -> list[tuple[int, int]]:
    match = re.search(
        rf"static const UnicodeRange {re.escape(name)}\[\] = \{{(.*?)\n\}};",
        text,
        re.S,
    )
    if match is None:
        raise SystemExit(f"{HEADER}: missing {name}")

    ranges = []
    for lo, hi in re.findall(r"\{0x([0-9A-Fa-f]+)u,\s*0x([0-9A-Fa-f]+)u\}", match.group(1)):
        ranges.append((int(lo, 16), int(hi, 16)))
    if not ranges:
        raise SystemExit(f"{HEADER}: {name} has no ranges")
    return ranges


def parse_header_ascii_bitset(text: str, name: str) -> list[int]:
    match = re.search(
        rf"static const uint32_t {re.escape(name)}\[4\] = \{{([^}}]+)\}};",
        text,
    )
    if match is None:
        raise SystemExit(f"{HEADER}: missing {name}")

    words = []
    for value in match.group(1).split(","):
        value = value.strip()
        if not value:
            continue
        if value.endswith("u"):
            value = value[:-1]
        words.append(int(value, 16))
    if len(words) != 4:
        raise SystemExit(f"{HEADER}: {name} expected 4 words, found {len(words)}")
    return words


def format_range(value: tuple[int, int]) -> str:
    lo, hi = value
    return f"0x{lo:X}" if lo == hi else f"0x{lo:X}..0x{hi:X}"


def compare(name: str, generated: list[tuple[int, int]], expected: list[tuple[int, int]]) -> bool:
    if generated == expected:
        print(f"{name}: {len(generated)} ranges match")
        return True

    generated_set = set(generated)
    expected_set = set(expected)
    missing = sorted(expected_set - generated_set)
    extra = sorted(generated_set - expected_set)

    print(f"{name}: mismatch", file=sys.stderr)
    if missing:
        preview = ", ".join(format_range(item) for item in missing[:8])
        print(f"  missing from generated header: {preview}", file=sys.stderr)
    if extra:
        preview = ", ".join(format_range(item) for item in extra[:8])
        print(f"  extra in generated header: {preview}", file=sys.stderr)
    return False


def compare_ascii_bitset(name: str, generated: list[int], expected: list[int]) -> bool:
    if generated == expected:
        print(f"{name}: 128 ASCII bits match")
        return True

    generated_set = {
        cp
        for cp in range(0x80)
        if generated[cp >> 5] & (1 << (cp & 31))
    }
    expected_set = {
        cp
        for cp in range(0x80)
        if expected[cp >> 5] & (1 << (cp & 31))
    }
    missing = sorted(expected_set - generated_set)
    extra = sorted(generated_set - expected_set)

    print(f"{name}: mismatch", file=sys.stderr)
    if missing:
        preview = ", ".join(f"0x{item:X}" for item in missing[:16])
        print(f"  missing from generated header: {preview}", file=sys.stderr)
    if extra:
        preview = ", ".join(f"0x{item:X}" for item in extra[:16])
        print(f"  extra in generated header: {preview}", file=sys.stderr)
    return False


def build_expected_tables(generator) -> tuple[dict[str, list[tuple[int, int]]], str]:
    regex = generator.regex
    xid_start_re = regex.compile(r"\A\p{XID_Start}\Z")
    xid_continue_re = regex.compile(r"\A\p{XID_Continue}\Z")
    number_re = regex.compile(r"\A\p{N}\Z")
    alphabetic_re = regex.compile(r"\A\p{Alphabetic}\Z")
    cjk_word_boundary_exclusion_re = regex.compile(
        r"\A(?:\p{Han}|\p{Hiragana}|\p{Katakana}|\p{Hangul})\Z"
    )
    tables = {
        "XID_START_RANGES": generator.ranges_from_predicate(
            "XID_START_RANGES",
            lambda ch: bool(xid_start_re.fullmatch(ch)),
        ),
        "XID_CONTINUE_RANGES": generator.ranges_from_predicate(
            "XID_CONTINUE_RANGES",
            lambda ch: bool(xid_continue_re.fullmatch(ch)),
        ),
        "NUMBER_RANGES": generator.ranges_from_predicate(
            "NUMBER_RANGES",
            lambda ch: bool(number_re.fullmatch(ch)),
        ),
        "MARKUP_WORDY_RANGES": generator.ranges_from_predicate(
            "MARKUP_WORDY_RANGES",
            lambda ch: (
                (bool(alphabetic_re.fullmatch(ch)) or bool(number_re.fullmatch(ch))) and
                not bool(cjk_word_boundary_exclusion_re.fullmatch(ch))
            ),
        ),
    }

    math_path = generator.first_existing(
        generator.candidate_paths(
            "MathClass-15.txt",
            "TREE_SITTER_TYPST_MATH_CLASS",
            "MATH_CLASS",
            "MATHCLASS_PATH",
        ) + generator.candidate_paths("MathClass.txt"),
        "MathClass data",
    )
    math = generator.parse_math_file(math_path)
    tables["MATH_OPEN_RANGES"] = math["O"]
    tables["MATH_CLOSE_RANGES"] = math["C"]

    sources = (
        f"regex {regex.__version__}, "
        f"MathClass {math_path}"
    )
    return tables, sources


def main() -> None:
    generator = load_generator()
    expected, sources = build_expected_tables(generator)
    header = HEADER.read_text(encoding="utf-8")

    ok = True
    for name in generator.REQUIRED_TABLES:
        generated = generator.normalize_ranges(name, parse_header_ranges(header, name))
        ok &= compare(name, generated, expected[name])
    for name, range_name in generator.ASCII_BITSETS.items():
        generated = parse_header_ascii_bitset(header, name)
        expected_bits = generator.ascii_bitset_words(name, expected[range_name])
        ok &= compare_ascii_bitset(name, generated, expected_bits)
    if not ok:
        raise SystemExit(1)
    print(f"unicode table parity passed ({sources})")


if __name__ == "__main__":
    main()
