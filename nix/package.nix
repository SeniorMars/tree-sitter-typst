{
  lib,
  stdenv,
  gnumake,
  nodejs,
  tree-sitter,
}:

let
  makeFlags = [
    "PREFIX=$(out)"
    "DESCRIPTION=Tree-sitter grammar for Typst"
  ];
in
stdenv.mkDerivation {
  pname = "tree-sitter-typst";
  version = "0.1.0";

  src = lib.cleanSourceWith {
    src = ../.;
    filter =
      path: type:
      let
        name = baseNameOf path;
      in
      !(name == ".direnv"
        || name == ".git"
        || name == "build"
        || name == "node_modules"
        || name == "result"
        || name == "target"
        || lib.hasPrefix "result-" name);
  };

  nativeBuildInputs = [
    gnumake
    nodejs
    tree-sitter
  ];

  preBuild = ''
    tree-sitter generate
  '';

  inherit makeFlags;
  installFlags = makeFlags;

  postInstall = ''
    install -Dm444 tree-sitter.json "$out/share/tree-sitter/grammars/typst/tree-sitter.json"

    if [ -d queries/typst ]; then
      install -Dm444 queries/typst/*.scm -t "$out/share/tree-sitter/queries/typst"
    fi
  '';

  meta = {
    description = "Tree-sitter grammar for Typst";
    homepage = "https://github.com/seniormars/tree-sitter-typst";
    license = lib.licenses.mit;
    platforms = lib.platforms.unix;
  };
}
