echo make windows_runtime -j
make windows_runtime -j

echo make windows_interpreter -j
make windows_interpreter -j

INSTALL=~/.wine/drive_c/Program\ Files\ \(x86\)/Vanity\ Scheme/

echo mkdir -p "$INSTALL/bin"
mkdir -p "$INSTALL/bin"

echo cp -R mingw64 "$INSTALL/."
cp -R mingw64 "$INSTALL/."

echo cp -R bin/x86_64-w64-mingw32/vanity.exe "$INSTALL/bin/."
cp -R bin/x86_64-w64-mingw32/vanity.exe "$INSTALL/bin/."

echo cp -R lib/x86_64-w64-mingw32/vscheme.dll "$INSTALL/bin/."
cp -R lib/x86_64-w64-mingw32/vscheme.dll "$INSTALL/bin/."

echo cp -R include "$INSTALL/."
cp -R include "$INSTALL/."
