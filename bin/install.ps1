#!/usr/bin/env sh

python3 -m .venv
./.venv/Scripts/Activate.ps1

conan install . --build=missing -s build_type=Debug -of build
