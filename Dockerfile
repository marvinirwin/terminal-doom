#!/usr/bin/env docker
FROM i386/ubuntu:xenial

RUN apt update \
    && apt-get -y install libncurses5-dev git cmake

RUN git clone https://github.com/marvinirwin/terminal-doom.git

WORKDIR /terminal-doom/build

RUN cmake .

RUN make

CMD /terminal-doom/build/terminal-doom
