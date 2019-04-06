//
// Created by Frodo on 2019-04-06.
//

#ifndef PG_DOOM_SECTOR_H
#define PG_DOOM_SECTOR_H


#include "r_defs.h"
#include "player.h"
#include "mobj2.h"


typedef struct mobj_t mobj_t;

//
// The SECTORS record, at runtime.
// Stores things/mobjs.
//
typedef	struct
{
    fixed_t	floorheight;
    fixed_t	ceilingheight;
    short	floorpic;
    short	ceilingpic;
    short	lightlevel;
    short	special;
    short	tag;

    // 0 = untraversed, 1,2 = sndlines -1
    int		soundtraversed;

    // thing that made a sound (or null)
    mobj_t*	soundtarget;

    // mapblock bounding box for height changes
    int		blockbox[4];

    // origin for any sounds played by the sector
    degenmobj_t	soundorg;

    // if == validcount, already checked
    int		validcount;

    // list of mobjs in sector
    mobj_t*	thinglist;

    // thinker_t for reversable actions
    void*	specialdata;

    int			linecount;
    struct line_s**	lines;	// [linecount] size

} sector_t;

#endif //PG_DOOM_SECTOR_H
