# /usr/bin/env sh

find . -iname '*.h' -o -iname '*.cpp' | xargs clang-format -i
