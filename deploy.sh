#!/bin/bash

date=$(date '+%Y-%m-%d')

git add .
git commit -m "chore: update from ${date}"
git push