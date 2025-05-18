Installation is tricky. Here's instructions for a clean install of debian.

# Basic Prereqs

```
sudo dpkg --add-architecture i386
sudo apt-get update
usdo apt-get install wine wine32 wine64 libwine libwine:i386 fonts-wine
sudo apt-get install git gcc mingw-w64 make clang rsync libsdl2-dev binutils vim flex bison
```

# Emscripten

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
Order is important. the `EM_CACHE` line must be last. validate success with `emcc --version`

# At last, vanity

```
git clone yada yada
cd vanity scheme
./configure
```
Make sure that the config.mk created has emscripten's path to some subfolder in `~/.emscripten_cache`
```
sudo make hatch -j
sudo make clean
make tests -j
make install -j
```

validate success with
```
cd demos/pong/
make a.out a.out.js -j
./a.out
emrun index.html
```
