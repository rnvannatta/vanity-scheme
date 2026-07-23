Installation is tricky. Here's instructions for a clean install of debian.

You can install vanity without mingw or emscripten support. And you scan skip installing flex and bison to build vanity with checked-in parsers.

# Basic Prereqs

```
sudo dpkg --add-architecture i386
sudo apt-get update
# only required if you wish to target windows.
sudo apt-get install wine wine32 wine64 libwine libwine:i386 fonts-wine
sudo apt-get install mingw-w64 flex bison
# strongly recommended deps
sudo apt-get install flex bison
# required deps
sudo apt-get install git gcc make rsync binutils
```

# Emscripten

Only required if you wish to target wasm.

```
git clone https://github.com/emscripten-core/emsdk.git
cd emsdk
./emsdk install 4.0.8
./emsdk activate 4.0.8
```

Now add these lines to your .bashrc and restart your terminal:
```
export EMSDK_QUIET=1
source ~/emsdk/emsdk_env.sh
export EM_CACHE=~/.emscripten_cache
```
Order is important. the `EM_CACHE` line must be last. validate success with `em-config CACHE` and `emcc --version`.

# At last, vanity

```
git clone https://github.com/rnvannatta/vanity-scheme.git
cd vanity-scheme
./configure
```
Mash enter when configuring. Make sure that the config.mk created has emscripten's path to some subfolder in `~/.emscripten_cache`
```
sudo make hatch -j
sudo make clean
make tests -j
sudo make install -j
```

validate success with
```
sudo apt-get install libsdl2-dev
cd demos/pong/
make a.out a.out.js -j
./a.out
emrun index.html
```
