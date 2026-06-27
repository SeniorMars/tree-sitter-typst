"""An upgraded parser for typst"""

from importlib.resources import files as _files

from ._binding import language


def _get_query(name, file):
    try:
        query = _files(f"{__package__}") / file
        globals()[name] = query.read_text()
    except FileNotFoundError:
        globals()[name] = None
    return globals()[name]


def __getattr__(name):
    if name == "HIGHLIGHTS_QUERY":
        return _get_query("HIGHLIGHTS_QUERY", "queries/typst/highlights.scm")
    if name == "INJECTIONS_QUERY":
        return _get_query("INJECTIONS_QUERY", "queries/typst/injections.scm")
    if name == "LOCALS_QUERY":
        return _get_query("LOCALS_QUERY", "queries/typst/locals.scm")
    if name == "FOLDS_QUERY":
        return _get_query("FOLDS_QUERY", "queries/typst/folds.scm")
    if name == "TAGS_QUERY":
        return _get_query("TAGS_QUERY", "queries/typst/tags.scm")

    raise AttributeError(f"module {__name__!r} has no attribute {name!r}")


__all__ = [
    "language",
    "HIGHLIGHTS_QUERY",
    "INJECTIONS_QUERY",
    "LOCALS_QUERY",
    "FOLDS_QUERY",
    "TAGS_QUERY",
]


def __dir__():
    return sorted(__all__ + [
        "__all__", "__builtins__", "__cached__", "__doc__", "__file__",
        "__loader__", "__name__", "__package__", "__path__", "__spec__",
    ])
