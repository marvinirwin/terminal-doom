#!/usr/bin/env bash
sudo docker rm DOOM_UBUNTU;

sudo docker run --name=DOOM_UBUNTU -it \
    --expose=22 \
    --expose=1234 \
    -p 22:22/tcp \
    -p 1234:1234/tcp \
    --security-opt seccomp:unconfined \
    -v $(pwd)/build:/terminal-doom \
    i386/ubuntu:xenial /bin/bash -c "
        apt update &&
        apt-get -y install libncurses5-dev cmake gdb vim &&
        apt-get -y install openssh-server &&
        mkdir /var/run/sshd &&
        echo 'root:THEPASSWORDYOUCREATED' | chpasswd &&
        echo "AllowTCPForwarding yes" >> /etc/ssh/sshd_config &&
        echo "PermitOpen any" >> /etc/ssh/sshd_config &&
        sed -i 's/PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config &&
        sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd &&
        /usr/sbin/sshd  &&
        export TERM=xterm &&
        cd /terminal-doom &&
        cmake . &&
        make &&
        gdb :1234 ./terminal-doom
    "


