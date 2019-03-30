// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// $Log:$
//
// DESCRIPTION:
//	Created by a sound utility.
//	Kept as a sample, DOOM2 sounds.
//
//-----------------------------------------------------------------------------


static const char 
rcsid[] = "$Id: sounds.c,v 1.3 1997/01/29 22:40:44 b1 Exp $";


#include "doomtype.h"
#include "sounds.h"

//
// Information about all the music
//

musicinfo_t S_music[] =
{
    { 0 },
    { "e1m1", 0 },
    { "e1m2", 0 },
    { "e1m3", 0 },
    { "e1m4", 0 },
    { "e1m5", 0 },
    { "e1m6", 0 },
    { "e1m7", 0 },
    { "e1m8", 0 },
    { "e1m9", 0 },
    { "e2m1", 0 },
    { "e2m2", 0 },
    { "e2m3", 0 },
    { "e2m4", 0 },
    { "e2m5", 0 },
    { "e2m6", 0 },
    { "e2m7", 0 },
    { "e2m8", 0 },
    { "e2m9", 0 },
    { "e3m1", 0 },
    { "e3m2", 0 },
    { "e3m3", 0 },
    { "e3m4", 0 },
    { "e3m5", 0 },
    { "e3m6", 0 },
    { "e3m7", 0 },
    { "e3m8", 0 },
    { "e3m9", 0 },
    { "inter", 0 },
    { "intro", 0 },
    { "bunny", 0 },
    { "victor", 0 },
    { "introa", 0 },
    { "runnin", 0 },
    { "stalks", 0 },
    { "countd", 0 },
    { "betwee", 0 },
    { "doom", 0 },
    { "the_da", 0 },
    { "shawn", 0 },
    { "ddtblu", 0 },
    { "in_cit", 0 },
    { "dead", 0 },
    { "stlks2", 0 },
    { "theda2", 0 },
    { "doom2", 0 },
    { "ddtbl2", 0 },
    { "runni2", 0 },
    { "dead2", 0 },
    { "stlks3", 0 },
    { "romero", 0 },
    { "shawn2", 0 },
    { "messag", 0 },
    { "count2", 0 },
    { "ddtbl3", 0 },
    { "ampie", 0 },
    { "theda3", 0 },
    { "adrian", 0 },
    { "messg2", 0 },
    { "romer2", 0 },
    { "tense", 0 },
    { "shawn3", 0 },
    { "openin", 0 },
    { "evil", 0 },
    { "ultima", 0 },
    { "read_m", 0 },
    { "dm2ttl", 0 },
    { "dm2int", 0 } 
};


//
// Information about all the sfx
//

sfxinfo_t S_sfx[] =
{
  // S_sfx[0] needs to be a dummy for odd reasons.
  { "none", doomFalse,  0, 0, -1, -1, 0 },

  { "pistol", doomFalse, 64, 0, -1, -1, 0 },
  { "shotgn", doomFalse, 64, 0, -1, -1, 0 },
  { "sgcock", doomFalse, 64, 0, -1, -1, 0 },
  { "dshtgn", doomFalse, 64, 0, -1, -1, 0 },
  { "dbopn", doomFalse, 64, 0, -1, -1, 0 },
  { "dbcls", doomFalse, 64, 0, -1, -1, 0 },
  { "dbload", doomFalse, 64, 0, -1, -1, 0 },
  { "plasma", doomFalse, 64, 0, -1, -1, 0 },
  { "bfg", doomFalse, 64, 0, -1, -1, 0 },
  { "sawup", doomFalse, 64, 0, -1, -1, 0 },
  { "sawidl", doomFalse, 118, 0, -1, -1, 0 },
  { "sawful", doomFalse, 64, 0, -1, -1, 0 },
  { "sawhit", doomFalse, 64, 0, -1, -1, 0 },
  { "rlaunc", doomFalse, 64, 0, -1, -1, 0 },
  { "rxplod", doomFalse, 70, 0, -1, -1, 0 },
  { "firsht", doomFalse, 70, 0, -1, -1, 0 },
  { "firxpl", doomFalse, 70, 0, -1, -1, 0 },
  { "pstart", doomFalse, 100, 0, -1, -1, 0 },
  { "pstop", doomFalse, 100, 0, -1, -1, 0 },
  { "doropn", doomFalse, 100, 0, -1, -1, 0 },
  { "dorcls", doomFalse, 100, 0, -1, -1, 0 },
  { "stnmov", doomFalse, 119, 0, -1, -1, 0 },
  { "swtchn", doomFalse, 78, 0, -1, -1, 0 },
  { "swtchx", doomFalse, 78, 0, -1, -1, 0 },
  { "plpain", doomFalse, 96, 0, -1, -1, 0 },
  { "dmpain", doomFalse, 96, 0, -1, -1, 0 },
  { "popain", doomFalse, 96, 0, -1, -1, 0 },
  { "vipain", doomFalse, 96, 0, -1, -1, 0 },
  { "mnpain", doomFalse, 96, 0, -1, -1, 0 },
  { "pepain", doomFalse, 96, 0, -1, -1, 0 },
  { "slop", doomFalse, 78, 0, -1, -1, 0 },
  { "itemup", doomTrue, 78, 0, -1, -1, 0 },
  { "wpnup", doomTrue, 78, 0, -1, -1, 0 },
  { "oof", doomFalse, 96, 0, -1, -1, 0 },
  { "telept", doomFalse, 32, 0, -1, -1, 0 },
  { "posit1", doomTrue, 98, 0, -1, -1, 0 },
  { "posit2", doomTrue, 98, 0, -1, -1, 0 },
  { "posit3", doomTrue, 98, 0, -1, -1, 0 },
  { "bgsit1", doomTrue, 98, 0, -1, -1, 0 },
  { "bgsit2", doomTrue, 98, 0, -1, -1, 0 },
  { "sgtsit", doomTrue, 98, 0, -1, -1, 0 },
  { "cacsit", doomTrue, 98, 0, -1, -1, 0 },
  { "brssit", doomTrue, 94, 0, -1, -1, 0 },
  { "cybsit", doomTrue, 92, 0, -1, -1, 0 },
  { "spisit", doomTrue, 90, 0, -1, -1, 0 },
  { "bspsit", doomTrue, 90, 0, -1, -1, 0 },
  { "kntsit", doomTrue, 90, 0, -1, -1, 0 },
  { "vilsit", doomTrue, 90, 0, -1, -1, 0 },
  { "mansit", doomTrue, 90, 0, -1, -1, 0 },
  { "pesit", doomTrue, 90, 0, -1, -1, 0 },
  { "sklatk", doomFalse, 70, 0, -1, -1, 0 },
  { "sgtatk", doomFalse, 70, 0, -1, -1, 0 },
  { "skepch", doomFalse, 70, 0, -1, -1, 0 },
  { "vilatk", doomFalse, 70, 0, -1, -1, 0 },
  { "claw", doomFalse, 70, 0, -1, -1, 0 },
  { "skeswg", doomFalse, 70, 0, -1, -1, 0 },
  { "pldeth", doomFalse, 32, 0, -1, -1, 0 },
  { "pdiehi", doomFalse, 32, 0, -1, -1, 0 },
  { "podth1", doomFalse, 70, 0, -1, -1, 0 },
  { "podth2", doomFalse, 70, 0, -1, -1, 0 },
  { "podth3", doomFalse, 70, 0, -1, -1, 0 },
  { "bgdth1", doomFalse, 70, 0, -1, -1, 0 },
  { "bgdth2", doomFalse, 70, 0, -1, -1, 0 },
  { "sgtdth", doomFalse, 70, 0, -1, -1, 0 },
  { "cacdth", doomFalse, 70, 0, -1, -1, 0 },
  { "skldth", doomFalse, 70, 0, -1, -1, 0 },
  { "brsdth", doomFalse, 32, 0, -1, -1, 0 },
  { "cybdth", doomFalse, 32, 0, -1, -1, 0 },
  { "spidth", doomFalse, 32, 0, -1, -1, 0 },
  { "bspdth", doomFalse, 32, 0, -1, -1, 0 },
  { "vildth", doomFalse, 32, 0, -1, -1, 0 },
  { "kntdth", doomFalse, 32, 0, -1, -1, 0 },
  { "pedth", doomFalse, 32, 0, -1, -1, 0 },
  { "skedth", doomFalse, 32, 0, -1, -1, 0 },
  { "posact", doomTrue, 120, 0, -1, -1, 0 },
  { "bgact", doomTrue, 120, 0, -1, -1, 0 },
  { "dmact", doomTrue, 120, 0, -1, -1, 0 },
  { "bspact", doomTrue, 100, 0, -1, -1, 0 },
  { "bspwlk", doomTrue, 100, 0, -1, -1, 0 },
  { "vilact", doomTrue, 100, 0, -1, -1, 0 },
  { "noway", doomFalse, 78, 0, -1, -1, 0 },
  { "barexp", doomFalse, 60, 0, -1, -1, 0 },
  { "punch", doomFalse, 64, 0, -1, -1, 0 },
  { "hoof", doomFalse, 70, 0, -1, -1, 0 },
  { "metal", doomFalse, 70, 0, -1, -1, 0 },
  { "chgun", doomFalse, 64, &S_sfx[sfx_pistol], 150, 0, 0 },
  { "tink", doomFalse, 60, 0, -1, -1, 0 },
  { "bdopn", doomFalse, 100, 0, -1, -1, 0 },
  { "bdcls", doomFalse, 100, 0, -1, -1, 0 },
  { "itmbk", doomFalse, 100, 0, -1, -1, 0 },
  { "flame", doomFalse, 32, 0, -1, -1, 0 },
  { "flamst", doomFalse, 32, 0, -1, -1, 0 },
  { "getpow", doomFalse, 60, 0, -1, -1, 0 },
  { "bospit", doomFalse, 70, 0, -1, -1, 0 },
  { "boscub", doomFalse, 70, 0, -1, -1, 0 },
  { "bossit", doomFalse, 70, 0, -1, -1, 0 },
  { "bospn", doomFalse, 70, 0, -1, -1, 0 },
  { "bosdth", doomFalse, 70, 0, -1, -1, 0 },
  { "manatk", doomFalse, 70, 0, -1, -1, 0 },
  { "mandth", doomFalse, 70, 0, -1, -1, 0 },
  { "sssit", doomFalse, 70, 0, -1, -1, 0 },
  { "ssdth", doomFalse, 70, 0, -1, -1, 0 },
  { "keenpn", doomFalse, 70, 0, -1, -1, 0 },
  { "keendt", doomFalse, 70, 0, -1, -1, 0 },
  { "skeact", doomFalse, 70, 0, -1, -1, 0 },
  { "skesit", doomFalse, 70, 0, -1, -1, 0 },
  { "skeatk", doomFalse, 70, 0, -1, -1, 0 },
  { "radio", doomFalse, 60, 0, -1, -1, 0 }
};

