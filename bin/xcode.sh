#!/usr/bin/env sh

python3 -m .venv
source ./.venv/bin/activate

conan install . -s build_type=Debug -c tools.cmake.cmaketoolchain:generator=Xcode
conan install . -s build_type=Release -c tools.cmake.cmaketoolchain:generator=Xcode

cmake . --preset conan-default