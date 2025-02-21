#!/bin/bash
repo_raiz=$(git rev-parse --show-toplevel 2>/dev/null)
git -C "$repo_raiz" ls-files -o -c --exclude-standard --ignored
