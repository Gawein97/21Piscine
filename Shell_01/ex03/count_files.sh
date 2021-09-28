#!/bin/sh
find . -type f -o -type d -maxdepth 2 | wc -l | sed 's/^ *//'
