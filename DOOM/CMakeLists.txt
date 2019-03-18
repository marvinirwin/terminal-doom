cmake_minimum_required (VERSION 2.6)
project ('terminal-doom)
file(GLOB_RECURSE sources linuxdoom-1.10 *.c *.h)

SET(MACOS "-DMACOS")
add_definitions(${MACOS})


add_executable(. ${sources})