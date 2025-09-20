#!/usr/bin/env sh

cmake . --preset conan-default

xcodebuild -project ./build/LearnCpp.xcodeproj
