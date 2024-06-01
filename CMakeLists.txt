cmake_minimum_required(VERSION 3.20)
set(CMAKE_C_COMPILER "/usr/bin/x86_64-w64-mingw32-gcc")
set(CMAKE_RC_COMPILER "/usr/bin/x86_64-w64-mingw32-windres")
set(CMAKE_RC_COMPILE_OBJECT "<CMAKE_RC_COMPILER> -O coff -i <SOURCE> -o <OBJECT>")
project(vanity)

enable_language(RC)

set(CPACK_NSIS_COMPRSSOR "/SOLID LZMA")

set(VANITY_BINARIES "${CMAKE_SOURCE_DIR}/bin/x86_64-w64-mingw32/vanity.exe" "${CMAKE_SOURCE_DIR}/lib/x86_64-w64-mingw32/vscheme.dll")
install(PROGRAMS ${VANITY_BINARIES}
        DESTINATION bin
        COMPONENT interpreter)

install(DIRECTORY "${CMAKE_SOURCE_DIR}/include/"
        DESTINATION include
        COMPONENT headers)

install(DIRECTORY "${CMAKE_SOURCE_DIR}/mingw64/"
        DESTINATION mingw64
        COMPONENT mingw64)

set(CPACK_PACKAGE_NAME "VanityScheme")
set(CPACK_PACKAGE_VENDOR "rnvannatta")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "R7RS Scheme compiler vanity project, with structured parallelism.")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "Vanity Scheme")

set(CPACK_NSIS_MUI_ICON "${CMAKE_SOURCE_DIR}/vanity.ico")

set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_SOURCE_DIR}/WINDOWS_INSTALL_LICENSE")

set(CPACK_COMPONENTS_ALL interpreter headers mingw64)

set(CPACK_COMPONENT_INTERPRETER_DISPLAY_NAME "Vanity Interpreter")
set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "Vanity Headers")
set(CPACK_COMPONENT_MINGW64_DISPLAY_NAME "MinGW")

set(CPACK_COMPONENT_MINGW64_DESCRIPTION "The Winlibs build of Minimalist GNU for Windows: necessary to use the FFI and the compiler.")

set(CPACK_NSIS_MENU_LINKS "bin/vanity.exe" "Vanity Interpreter")

include(CPack)
