#!/bin/bash

set -e

printf "NOTE: This script must be run from its parent directory (01_18).\n"

cd ../01_17

printf "\n=== BUILDING ===\n"
make

printf "\n=== INPUT ===\n"
cat ../01_18/all_equal.input
printf "=== OUTPUT ===\n"
./main < ../01_18/all_equal.input

printf "\n=== INPUT ===\n"
cat ../01_18/no_repeats.input
printf "=== OUTPUT ===\n"
./main < ../01_18/no_repeats.input

printf "\n=== CLEANING UP ===\n"
make clean
