#!/usr/bin/env bash
sudo docker rm DOOM_UBUNTU;

    # -v $(pwd)/build:/terminal-doom \
sudo docker run --name=DOOM_UBUNTU -it \
    --expose=22 \
    -p 22:22/tcp \
    --security-opt seccomp:unconfined \
    i386/ubuntu:xenial /bin/bash -c "
        apt update &&
        apt-get -y install libncurses5-dev cmake gdb &&
        apt-get -y install openssh-server &&
        mkdir /var/run/sshd &&
        echo 'root:THEPASSWORDYOUCREATED' | chpasswd &&
        sed -i 's/PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config &&
        sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd &&
        export NOTVISIBLE="in users profile" &&
        echo \"export VISIBLE=now\" >> /etc/profile &&
        /usr/sbin/sshd  &&
        export TERM=xterm &&
        cd /terminal-doom &&
        mkdir remote-host
        cmake . &&
        make &&
    "

