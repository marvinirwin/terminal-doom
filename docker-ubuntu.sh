#!/usr/bin/env bash

cd ..

sudo docker rm DOOM_UBUNTU
# I think this command should create a volume with the host path as the current directory
sudo docker run --name=DOOM_UBUNTU -it \
    -v $(pwd)/build:/terminal-doom \
    -v /Users/frodo/CLionProjects/test-memfs:/test \
    i386/ubuntu:xenial


sudo docker exec -it DOOM_UBUNTU /bin/bash

apt-get install libncurses5-dev cmake

ls /terminal-doom

export TERM=xterm

cd /terminal-doom
cmake .
make