{pkgs ? import <nixpkgs> {}}:
pkgs.mkShell {
  allowUnfree = true;
  name = "tiv";
  packages = with pkgs; [
    clang-tools
    gcc
    bash-language-server
    valgrind
    yamlfix
    yamlfmt
    alejandra
    cbfmt
    mdformat
    beautysh
    curl
    shfmt
    uncrustify
    tree-sitter-grammars.tree-sitter-c
    gdb
  ];
  shellHook = ''
    mkdir tmp || true
    export TMPDIR=./tmp/
  '';
}
