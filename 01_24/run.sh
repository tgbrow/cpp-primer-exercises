#!/bin/bash

set -e

printf "NOTE: This script must be run from its parent directory (01_24).\n"

cd ../01_23

printf "\n=== BUILDING ===\n"
make

printf "\n=== INPUT ===\n"
cat test.input
printf "=== OUTPUT ===\n"
./main < test.input

printf "\n=== CLEANING UP ===\n"
make clean
