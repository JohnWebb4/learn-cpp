#!/usr/bin/env sh

pushd build
cmake .. --preset conan-default
popd

# cmake --build build --preset conan-default
