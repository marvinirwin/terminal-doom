#!/usr/bin/env bash
sudo docker rm DOOM_UBUNTU

sudo docker run --name=DOOM_UBUNTU -it \
    -v $(pwd)/build:/terminal-doom \
    i386/ubuntu:xenial

sudo docker exec -it DOOM_UBUNTU /bin/bash

apt-get install libncurses5-dev cmake

ls /terminal-doom

export TERM=xterm

cd /terminal-doom
cmake .
make