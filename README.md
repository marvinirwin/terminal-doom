# terminal-doom

Ultimate DOOM, "playable" in the terminal

## Prerequisites

1. 32 bit curses
2. A DOOM / DOOM2 .wad file
3. A C compiler
4. A terminal
5. q to select, wasd to move, e to shoot

## Why did you do this?
It was an excuse to learn to read and write(poorly) some C and it was funny.  

## Why does it look so bad?
Each pixel is converted to greyscale and then mapped to an ASCII character based on density, turns out ASCII characters aren't very distinct when based on density.

## Why aren't there colors?
If you change the compiler flags you can see what it looks like with colors, it's just that the curses `attron` function takes so long.  I even optimized it so that I would only need to change colors 8 times per frame, it's still unbearably slow.

## Why is it so difficult to move
I can't detect keyup events with the terminal, moveover I cannot press more than 1 down at once.  

## Can I play multiplayer?
Don't know, I've never tried, this is just a mildly modified version of https://github.com/id-Software/DOOM

## Sound?
No, I never figured out how that worked, the sound server fails on startup (whatever a sound server is)

## Any plans for the future?
I'm going to try and make it run as a postgres extension using tables for input and output.

## It memory leaks!
I prefer the phrase "Has considerable hardware requirements"
