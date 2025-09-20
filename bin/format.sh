# /usr/bin/env sh

find . -iname '*.h' -not -path './build/*' -o -iname '*.cpp' -not -path './build/*' | xargs clang-format -i
