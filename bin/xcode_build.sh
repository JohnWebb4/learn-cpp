#!/usr/bin/env sh

cmake . --preset conan-default

xcodebuild -project ./build/LearnCpp.xcodeproj | xcpretty -r json-compilation-database --output ./build/compile_commands_clang.json
# sed 's/-ivfsstatcache (\/[^\s]*)\.sdkstatcache//g' ./build/compile_commands_clang.json > ./build/compile_commands.json
