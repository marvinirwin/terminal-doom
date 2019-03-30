//
// Created by Frodo on 2019-03-27.
//

#include <curses.h>
#include <stdlib.h>
#include <memory.h>
#include "debug.h"

int debugStartX  = 340;
int debugMaxY = 100;
int debugPosY = 0;
void curseDebug(char * cstr){
    if (debugPosY > debugMaxY) {
        clear();
        debugPosY = 0;
    } else {
        debugPosY++;
    }
    mvprintw(debugPosY, debugStartX, cstr);
    refresh();
}

void cPrintf(char * format, ...) {
    char * newfmt = malloc(strlen(format) * 2 + 10);
    va_list args;
    va_start(args, format);
    sprintf(newfmt, format, args);
    va_end(args);
    curseDebug(newfmt);
    free(newfmt);
}
