#!/bin/bash
ignored_files=$(git ls-files -o --exclude-standard --ignored)

ignored_files=$(echo -n "$ignored_files" | tr '\0' '\n')

echo "$ignored_files"

