#!/usr/bin/env sh

python3 -m .venv
source ./.venv/bin/activate

conan install . -s build_type=Debug -c tools.cmake.cmaketoolchain:generator=Xcode -of xcode
conan install . -s build_type=Release -c tools.cmake.cmaketoolchain:generator=Xcode -of xcode

cmake . --preset conan-default