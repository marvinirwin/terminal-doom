//
// Created by Frodo on 2019-02-28.
//

#include "xlib_hack.h"

void myPrint(char* str) {
    printf("%c[2J%c[;H",(char) 27, (char) 27);
    printf(str);
}

