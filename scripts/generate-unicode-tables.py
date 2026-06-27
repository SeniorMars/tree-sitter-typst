#!/usr/bin/env python3
"""Generate compact Unicode tables used by the external scanner.

XID, numeric, and markup word tables are generated from the Python `regex`
package's Unicode properties. Math opening/closing classes come from UTR #25
MathClass data.
"""
from __future__ import annotations

from pathlib import Path
import os
import re

import regex

ROOT = Path(__file__).resolve().parents[1]
OUT = Path(os.environ.get(
    "TREE_SITTER_TYPST_UNICODE_TABLES_OUT",
    ROOT / "src" / "unicode_tables.h",
))

LOCAL_UNICODE_DIRS = [
    ROOT / "vendor" / "unicode",
    ROOT / "src" / "vendor" / "unicode",
    ROOT / "third_party" / "unicode",
    ROOT / "unicode",
    ROOT / "data",
]

SYSTEM_UNICODE_DIRS = [
    Path("/usr/share/texlive/texmf-dist/tex/generic/unicode-data"),
    Path("/usr/share/unicode"),
    Path("/usr/share/unicode/ucd"),
]

MATH_PROPERTIES = ["O", "C"]

REQUIRED_TABLES = [
    "XID_START_RANGES",
    "XID_CONTINUE_RANGES",
    "NUMBER_RANGES",
    "MARKUP_WORDY_RANGES",
    "MATH_OPEN_RANGES",
    "MATH_CLOSE_RANGES",
]

ASCII_BITSETS = {
    "XID_START_ASCII_BITS": "XID_START_RANGES",
    "XID_CONTINUE_ASCII_BITS": "XID_CONTINUE_RANGES",
}


def env_paths(*names: str) -> list[Path]:
    paths = []
    for name in names:
        value = os.environ.get(name)
        if value:
            paths.extend(Path(part).expanduser() for part in value.split(os.pathsep) if part)
    return paths


def candidate_paths(filename: str, *env_names: str) -> list[Path]:
    paths = env_paths(*env_names)
    data_dirs = env_paths("TREE_SITTER_TYPST_UNICODE_DIR", "UNICODE_DATA_DIR")
    paths.extend(directory / filename for directory in data_dirs)
    paths.extend(directory / filename for directory in LOCAL_UNICODE_DIRS)
    paths.extend(directory / filename for directory in SYSTEM_UNICODE_DIRS)
    return paths


def first_existing(paths: list[Path], description: str) -> Path:
    for path in paths:
        if path.exists():
            return path
    tried = "\n  ".join(str(path) for path in paths)
    raise SystemExit(
        f"missing {description}; tried:\n  {tried}\n"
        "Set TREE_SITTER_TYPST_UNICODE_DIR or the file-specific environment override."
    )


def normalize_ranges(name: str, values: list[tuple[int, int]]) -> list[tuple[int, int]]:
    if not values:
        raise SystemExit(f"{name} produced no ranges")

    for lo, hi in values:
        if lo > hi:
            raise SystemExit(f"{name} has inverted range 0x{lo:X}..0x{hi:X}")
        if lo < 0 or hi > 0x10FFFF:
            raise SystemExit(f"{name} has out-of-Unicode range 0x{lo:X}..0x{hi:X}")
        if lo <= 0xDFFF and hi >= 0xD800:
            raise SystemExit(f"{name} includes surrogate range 0x{lo:X}..0x{hi:X}")

    merged: list[tuple[int, int]] = []
    for lo, hi in sorted(values):
        if merged and lo <= merged[-1][1] + 1:
            merged[-1] = (merged[-1][0], max(merged[-1][1], hi))
        else:
            merged.append((lo, hi))
    return merged


def ranges_from_predicate(name: str, predicate) -> list[tuple[int, int]]:
    ranges = []
    start = None
    prev = None
    for cp in range(0x110000):
        hit = False if 0xD800 <= cp <= 0xDFFF else predicate(chr(cp))
        if hit:
            if start is None:
                start = prev = cp
            elif cp == prev + 1:
                prev = cp
            else:
                ranges.append((start, prev))
                start = prev = cp
        elif start is not None:
            ranges.append((start, prev))
            start = prev = None
    if start is not None:
        ranges.append((start, prev))
    return normalize_ranges(name, ranges)


def parse_codepoint_range(field: str, path: Path, line_number: int) -> tuple[int, int]:
    try:
        if ".." in field:
            lo, hi = (int(value, 16) for value in field.split("..", 1))
        else:
            lo = hi = int(field, 16)
    except ValueError as error:
        raise SystemExit(f"{path}:{line_number}: invalid code point range {field!r}") from error
    return lo, hi


def parse_property_file(path: Path, wanted: list[str]) -> dict[str, list[tuple[int, int]]]:
    result = {name: [] for name in wanted}
    wanted_set = set(wanted)
    for line_number, raw in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        line = raw.split("#", 1)[0].strip()
        if not line:
            continue
        if ";" not in line:
            raise SystemExit(f"{path}:{line_number}: expected ';' separator")
        field, prop = [part.strip() for part in line.split(";", 1)]
        if prop not in wanted_set:
            continue
        result[prop].append(parse_codepoint_range(field, path, line_number))

    for prop in wanted:
        result[prop] = normalize_ranges(f"{path.name}:{prop}", result[prop])
    return result


def parse_math_file(path: Path) -> dict[str, list[tuple[int, int]]]:
    return parse_property_file(path, MATH_PROPERTIES)


def c_array(name: str, values: list[tuple[int, int]]) -> str:
    values = normalize_ranges(name, values)
    body = "\n".join(f"  {{0x{lo:X}u, 0x{hi:X}u}}," for lo, hi in values)
    return (
        f"static const UnicodeRange {name}[] = {{\n{body}\n}};\n"
        f"#define {name}_LEN (sizeof({name}) / sizeof({name}[0]))\n"
    )


def ascii_bitset_words(name: str, values: list[tuple[int, int]]) -> list[int]:
    values = normalize_ranges(name, values)
    words = [0, 0, 0, 0]
    for lo, hi in values:
        if hi < 0x80:
            upper = hi
        elif lo < 0x80:
            upper = 0x7F
        else:
            continue
        for cp in range(lo, upper + 1):
            words[cp >> 5] |= 1 << (cp & 31)
    return words


def c_ascii_bitset(name: str, values: list[tuple[int, int]]) -> str:
    words = ascii_bitset_words(name, values)
    body = ", ".join(f"0x{word:08X}u" for word in words)
    return f"static const uint32_t {name}[4] = {{{body}}};\n"


def source_note(path: Path) -> str:
    notes = []
    for raw in path.read_text(encoding="utf-8", errors="replace").splitlines()[:40]:
        line = raw.strip()
        if not line.startswith("#"):
            continue
        line = line.lstrip("#").strip()
        if re.search(r"(revision|date|graphemebreakproperty)", line, re.I):
            notes.append(line)
    return "; ".join(notes[:2]) if notes else path.name


def display_path(path: Path) -> str:
    try:
        return str(path.resolve().relative_to(ROOT))
    except ValueError:
        return str(path)


def verify_required_tables(text: str) -> None:
    missing = []
    for name in REQUIRED_TABLES:
        has_array = re.search(rf"static const UnicodeRange {re.escape(name)}\[\]", text)
        has_len = re.search(rf"#define {re.escape(name)}_LEN\b", text)
        if not has_array or not has_len:
            missing.append(name)
    if missing:
        raise SystemExit("generated header is missing tables: " + ", ".join(missing))
    missing_bitsets = []
    for name in ASCII_BITSETS:
        if not re.search(rf"static const uint32_t {re.escape(name)}\[4\]", text):
            missing_bitsets.append(name)
    if missing_bitsets:
        raise SystemExit("generated header is missing ASCII bitsets: " + ", ".join(missing_bitsets))


def write_atomic(path: Path, text: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    tmp = path.with_name(f".{path.name}.tmp")
    tmp.write_text(text, encoding="utf-8")
    tmp.replace(path)


def main() -> None:
    xid_start_re = regex.compile(r"\A\p{XID_Start}\Z")
    xid_continue_re = regex.compile(r"\A\p{XID_Continue}\Z")
    number_re = regex.compile(r"\A\p{N}\Z")
    alphabetic_re = regex.compile(r"\A\p{Alphabetic}\Z")
    cjk_word_boundary_exclusion_re = regex.compile(
        r"\A(?:\p{Han}|\p{Hiragana}|\p{Katakana}|\p{Hangul})\Z"
    )
    xid_start = ranges_from_predicate("XID_START_RANGES", lambda ch: bool(xid_start_re.fullmatch(ch)))
    xid_continue = ranges_from_predicate("XID_CONTINUE_RANGES", lambda ch: bool(xid_continue_re.fullmatch(ch)))
    number = ranges_from_predicate("NUMBER_RANGES", lambda ch: bool(number_re.fullmatch(ch)))
    markup_wordy = ranges_from_predicate(
        "MARKUP_WORDY_RANGES",
        lambda ch: (
            (bool(alphabetic_re.fullmatch(ch)) or bool(number_re.fullmatch(ch))) and
            not bool(cjk_word_boundary_exclusion_re.fullmatch(ch))
        ),
    )
    math_path = first_existing(
        candidate_paths(
            "MathClass-15.txt",
            "TREE_SITTER_TYPST_MATH_CLASS",
            "MATH_CLASS",
            "MATHCLASS_PATH",
        ) + candidate_paths("MathClass.txt"),
        "MathClass data",
    )

    math = parse_math_file(math_path)

    text = (
        "// Generated by scripts/generate-unicode-tables.py. Do not edit by hand.\n"
        f"// MathClass source: {display_path(math_path)} ({source_note(math_path)})\n"
        f"// Python regex version: {regex.__version__}\n"
        "#ifndef TREE_SITTER_TYPST_UNICODE_TABLES_H_\n"
        "#define TREE_SITTER_TYPST_UNICODE_TABLES_H_\n\n"
        "#include <stddef.h>\n"
        "#include <stdint.h>\n\n"
        "typedef struct {\n"
        "  uint32_t first;\n"
        "  uint32_t last;\n"
        "} UnicodeRange;\n\n"
    )
    text += c_array("XID_START_RANGES", xid_start) + "\n"
    text += c_ascii_bitset("XID_START_ASCII_BITS", xid_start) + "\n"
    text += c_array("XID_CONTINUE_RANGES", xid_continue) + "\n"
    text += c_ascii_bitset("XID_CONTINUE_ASCII_BITS", xid_continue) + "\n"
    text += c_array("NUMBER_RANGES", number) + "\n"
    text += c_array("MARKUP_WORDY_RANGES", markup_wordy) + "\n"
    text += c_array("MATH_OPEN_RANGES", math["O"]) + "\n"
    text += c_array("MATH_CLOSE_RANGES", math["C"]) + "\n"
    text += "#endif\n"

    verify_required_tables(text)
    write_atomic(OUT, text)
    print(f"wrote {OUT} ({OUT.stat().st_size} bytes)")


if __name__ == "__main__":
    main()
