#!/usr/bin/env bash

python3 -m .venv
source ./.venv/bin/activate

mkdir build
pushd build

conan install .. -s build_type=Debug -c tools.cmake.cmaketoolchain:generator=Xcode -of build
conan install .. -s build_type=Release -c tools.cmake.cmaketoolchain:generator=Xcode -of build

popd

# conan install . --build=missing -s build_type=Debug
