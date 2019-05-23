#!/usr/bin/env bash

rm CMakeCache.txt
rm -rf CMakeFiles
rm -rf cmake-build-debug
cmake .
make
