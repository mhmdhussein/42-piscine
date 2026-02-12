#!/bin/sh
cd ~/git_Shell00
commit_ids=$(git log -5 --pretty=format:"%H")
echo "$commit_ids"
