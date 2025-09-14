#!/usr/bin/env sh

python3 -m .venv
source ./.venv/bin/activate

conan install . --build=missing -s build_type=Debug -of build
