python3 -m .venv
./.venv/Scripts/Activate.ps1
conan install . --output-folder=build --build=missing  --profile=debug
