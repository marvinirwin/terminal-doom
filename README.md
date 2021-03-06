# terminal-doom

Ultimate DOOM, "playable" in the terminal

![](https://user-images.githubusercontent.com/25396621/57265443-9b6d1500-702c-11e9-91a7-32ca2916bec0.gif)

## Docker Quickplay
```
git clone https://github.com/marvinirwin/terminal-doom.git &&
cd terminal-doom &&
docker run --name=DOOM_UBUNTU -it \
    -v $(pwd)/build:/terminal-doom \
    i386/ubuntu:xenial /bin/bash -c "
        apt update &&
        apt-get -y install libncurses5-dev cmake  &&
        cd /terminal-doom &&
        cmake . &&
        make &&
        ./terminal-doom
    "
```

## Prerequisites

1. 32 bit curses
2. A DOOM / DOOM2 .wad file
3. A C compiler
4. A terminal
5. q to select, wasd to move, e to shoot

## Why did you do this?
It was an excuse to learn to read and write(poorly) some C and it was funny.  

## Why does it look so bad?
Each pixel is converted to greyscale and then mapped to an ASCII character based on density, turns out ASCII characters aren't very distinct when looked at far away.

## Why aren't there colors?
If you change the compiler flags you can see what it looks like with colors, it's just that the curses `attron` function takes so long.  I even optimized it so that I would only need to change colors 8 times per frame, it's still unbearably slow.

## Why is it so difficult to move
I can't detect keyup events with the terminal, moreover I cannot press more than 1 down at once.  

## Can I play multiplayer?
Don't know, I've never tried, this is just a mildly modified version of https://github.com/id-Software/DOOM

## Sound?
No, I never figured out how that worked, the sound server fails on startup (whatever a sound server is)

## It memory leaks!
I prefer the phrase "Has considerable hardware requirements"
