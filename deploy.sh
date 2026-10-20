#!/bin/bash

date=$(date '+%Y-%m-%d')

git add .
git reset -q -- '*.out' '*a.exe' '*.exe' '.vscode' '*test*' '*teste*' 2>/dev/null
git commit -m "chore: update from ${date}"
git push
