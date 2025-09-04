python3 -m .venv
source ./.venv/bin/activate
conan install . --build=missing  --profile=debug
