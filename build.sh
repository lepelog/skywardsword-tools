#!/usr/bin/env sh

# abort on errors
set -e

mkdir -p output/event
mkdir -p output/event2
mkdir -p output/stage
mkdir -p output/text
mkdir -p output/demo

# build
python3 msbf.py
python3 bzs.py
python3 stb.py
python3 navi-table.py
python3 zevdat.py

# navigate into the build output directory
# cd output

# git init
# git add -A
# git commit -m 'generated'

# git push -f git@github.com:lepelog/skywardsword-tools.git master:output