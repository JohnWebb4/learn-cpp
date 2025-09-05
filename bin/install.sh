python3 -m .venv
source ./.venv/bin/activate
conan install . --output-folder=build --build=missing  --profile=debug
