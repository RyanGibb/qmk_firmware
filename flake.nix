{
  description = "Flake for building qmk firmware";

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs { inherit system; };
        # change to your liking
        keyboard = "moonlander";
        keymap = "ryan";
      in
      {
        # build with `nix build '.?submodules=1'`
        packages.default = pkgs.stdenv.mkDerivation {
          name = "keymap";
          src = ./.;
          phases = [ "buildPhase" ];
          buildInputs = [ pkgs.qmk ];
          buildPhase = ''
            make -C $src BUILD_DIR=`pwd`/.build COPY=echo -j8 moonlander:ryan
            mkdir $out
            cp -r .build/* $out/
          '';
        };

        # Get a devshell with `nix develop` and then use `build` and `flash`.
        # Build dir is taken as a param of `build` and `flash`,
        # e.g. to flash with the output of `nix build '.?submodules=1'` do `flash result`.
        devShell = pkgs.mkShell {
          KEYBOARD = keyboard;
          KEYMAP = keymap;
          buildInputs = [ pkgs.qmk ];
          shellHook = ''
            build() {
              BUILD_DIR=''${1:-.build}
              make -C . BUILD_DIR=$BUILD_DIR COPY=echo -j8 $KEYBOARD:$KEYMAP
            }
            flash() {
              BUILD_DIR=''${1:-.build}
              make -C . BUILD_DIR=$BUILD_DIR COPY=echo -j8 $KEYBOARD:$KEYMAP:flash
            }
          '';
        };
      }
  );
}