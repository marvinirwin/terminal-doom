//
// Created by Frodo on 2019-03-31.
//

#ifndef PG_DOOM_P_ENEMY2_H
#define PG_DOOM_P_ENEMY2_H

// static const char rcsid[] = "$Id: p_enemy.c,v 1.5 1997/02/03 22:45:11 b1 Exp $";

#include <stdlib.h>

#include "m_random.h"
#include "i_system.h"

#include "doomdef.h"
#include "p_local.h"

#include "s_sound.h"

#include "g_game.h"

// State.
#include "doomstat.h"
#include "r_state.h"

// Data.
#include "sounds.h"

#Include "player.h"
#include "r_data.h"




typedef struct
{
    state_t*	state;	// a NULL state means not active
    int		tics;
    fixed_t	sx;
    fixed_t	sy;

} pspdef_t;

typedef enum {
    DI_EAST,
    DI_NORTHEAST,
    DI_NORTH,
    DI_NORTHWEST,
    DI_WEST,
    DI_SOUTHWEST,
    DI_SOUTH,
    DI_SOUTHEAST,
    DI_NODIR,
    NUMDIRS

} dirtype_t;


//
// P_NewChaseDir related LUT.
//
dirtype_t opposite[] = {
        DI_WEST, DI_SOUTHWEST, DI_SOUTH, DI_SOUTHEAST,
        DI_EAST, DI_NORTHEAST, DI_NORTH, DI_NORTHWEST, DI_NODIR
};

dirtype_t diags[] = {
        DI_NORTHWEST, DI_NORTHEAST, DI_SOUTHWEST, DI_SOUTHEAST
};


//
// ENEMY THINKING
// Enemies are allways spawned
// with targetplayer = -1, threshold = 0
// Most monsters are spawned unaware of all players,
// but some can be made preaware
//


struct mobj_t;

//
// Called by P_NoiseAlert.
// Recursively traverse adjacent sectors,
// sound blocking lines cut off traversal.
//

mobj_t*		soundtarget;


//
// P_Move
// Move in the current direction,
// returns false if the move is blocked.
//
fixed_t	xspeed[8] = {FRACUNIT,47000,0,-47000,-FRACUNIT,-47000,0,47000};
fixed_t yspeed[8] = {0,47000,FRACUNIT,47000,0,-47000,-FRACUNIT,-47000};

#define MAXSPECIALCROSS	8

extern	line_t*	spechit[MAXSPECIALCROSS];
extern	int	numspechit;

int	TRACEANGLE = 0xc000000;



//
// PIT_VileCheck
// Detect a corpse that could be raised.
//
mobj_t*		corpsehit;
mobj_t*		vileobj;
fixed_t		viletryx;
fixed_t		viletryy;






//
// Mancubus attack,
// firing three missiles (bruisers)
// in three different directions?
// Doesn't look like it.
//
#define	FATSPREAD	(ANG90/8)


//
// SkullAttack
// Fly at the player like a missile.
//
#define	SKULLSPEED		(20*FRACUNIT)











void
A_ReFire
        ( player_t*	player,
          pspdef_t*	psp );




mobj_t*		braintargets[32];
int		numbraintargets;
int		braintargeton;











void A_Fall (mobj_t *actor);

void A_Fire (mobj_t* actor);

void A_SpawnFly (mobj_t* mo);

void P_NoiseAlert (mobj_t* target, mobj_t* emmiter);

void
P_RecursiveSound
        ( sector_t*	sec,
          int		soundblocks );


boolean P_CheckMissileRange (mobj_t* actor);

void A_Look (mobj_t* actor);
void A_Chase (mobj_t*	actor);
void A_FaceTarget (mobj_t* actor);
void A_PosAttack (mobj_t* actor);
void A_SPosAttack (mobj_t* actor);
void A_CPosAttack (mobj_t* actor);
void A_HeadAttack (mobj_t* actor);
void A_SkelFist (mobj_t*	actor);

//
// A_VileTarget
// Spawn the hellfire
//
void A_VileTarget (mobj_t*	actor);




//
// A_VileAttack
//
void A_VileAttack (mobj_t* actor);


void A_FatRaise (mobj_t *actor);


void A_FatAttack1 (mobj_t* actor);

void A_FatAttack2 (mobj_t* actor);

void A_FatAttack3 (mobj_t*	actor);


void A_SkullAttack (mobj_t* actor);
//
// A_PainShootSkull
// Spawn a lost soul and launch it at the target
//
void
A_PainShootSkull
        ( mobj_t*	actor,
          angle_t	angle );


//
// A_PainAttack
// Spawn a lost soul and launch it at the target
//
void A_PainAttack (mobj_t* actor);


void A_PainDie (mobj_t* actor);


void A_Scream (mobj_t* actor);


void A_XScream (mobj_t* actor);

void A_Pain (mobj_t* actor);


void A_Fall (mobj_t *actor)
{
    // actor is on ground, it can be walked over
    actor->flags &= ~MF_SOLID;

    // So change this if corpse objects
    // are meant to be obstacles.
}


//
// A_Explode
//
void A_Explode (mobj_t* thingy);


//
// A_BossDeath
// Possibly trigger special effects
// if on first boss level
//
void A_BossDeath (mobj_t* mo);


void A_Hoof (mobj_t* mo);

void A_Metal (mobj_t* mo);

void A_BabyMetal (mobj_t* mo);


void A_FireCrackle(mobj_t *actor);

void
A_OpenShotgun2
        ( player_t*	player,
          pspdef_t*	psp );

void
A_LoadShotgun2
        ( player_t*	player,
          pspdef_t*	psp );


void
A_CloseShotgun2
        ( player_t*	player,
          pspdef_t*	psp );


void A_BrainAwake (mobj_t* mo);


void A_BrainPain (mobj_t*	mo);


void A_BrainScream (mobj_t*	mo);


void A_BrainExplode (mobj_t* mo);


void A_BrainDie (mobj_t*	mo);


void A_BrainSpit (mobj_t*	mo);


// travelling cube sound
void A_SpawnSound (mobj_t* mo);
void A_PlayerScream (mobj_t* mo);
void A_VileStart (mobj_t* actor);
void A_Fire (mobj_t* actor);
void A_StartFire (mobj_t* actor);
void A_VileChase (mobj_t* actor);
boolean PIT_VileCheck (mobj_t*	thing);
void A_Tracer (mobj_t* actor);
void A_SkelWhoosh (mobj_t*	actor);
void A_CyberAttack (mobj_t* actor);
void A_SkelMissile (mobj_t* actor);
void A_BruisAttack (mobj_t* actor);
void A_CPosRefire (mobj_t* actor);
void A_SpidRefire (mobj_t* actor);
void A_BspiAttack (mobj_t *actor);
void A_SargAttack (mobj_t* actor);
void A_TroopAttack (mobj_t* actor);
boolean P_CheckMeleeRange (mobj_t*	actor);
boolean P_Move (mobj_t*	actor);
boolean P_TryWalk (mobj_t* actor);
void A_KeenDie (mobj_t* mo);
boolean
P_LookForPlayers
        ( mobj_t*	actor,
          boolean	allaround );
void P_NewChaseDir (mobj_t*	actor);

#endif //PG_DOOM_P_ENEMY2_H
