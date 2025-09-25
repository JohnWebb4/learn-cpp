# /usr/bin/env sh

pushd ./build
ctest -C Debug $@
popd
