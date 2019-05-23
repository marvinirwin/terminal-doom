#!/usr/bin/env bash
sudo docker rm DOOM_UBUNTU

sudo docker run --name=DOOM_UBUNTU -it \
    -v $(pwd)/build:/terminal-doom \
    i386/ubuntu:xenial /bin/bash -c "
        apt update;
        apt-get -y install libncurses5-dev cmake;
        export TERM=xterm;
        cd /terminal-doom;
        cmake .;
        make;
    "

