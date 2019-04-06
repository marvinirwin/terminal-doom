//
// Created by Frodo on 2019-04-04.
//

#ifndef PG_DOOM_PLAYER_H
#define PG_DOOM_PLAYER_H


#include "p_mobj.h"
#include "d_player.h"
#include "d_ticcmd.h"
#include "info.h"
#include "p_mobj.h"
#include "p_enemy2.h"

//
// Overlay psprites are scaled shapes
// drawn directly on the view screen,
// coordinates are given for a 320*200 view screen.
//
typedef enum
{
    ps_weapon,
    ps_flash,
    NUMPSPRITES

} psprnum_t;


//
// Player states.
//
typedef enum
{
    // Playing or camping.
            PST_LIVE,
    // Dead on the ground, view follows killer.
            PST_DEAD,
    // Ready to restart/respawn???
            PST_REBORN

} playerstate_t;


//
// Extended player object info: player_t
//
typedef struct player_t
{
    mobj_t*		mo;
    playerstate_t	playerstate;
    ticcmd_t		cmd;

    // Determine POV,
    //  including viewpoint bobbing during movement.
    // Focal origin above r.z
    fixed_t		viewz;
    // Base height above floor for viewz.
    fixed_t		viewheight;
    // Bob/squat speed.
    fixed_t         	deltaviewheight;
    // bounded/scaled total momentum.
    fixed_t         	bob;

    // This is only used between levels,
    // mo->health is used during levels.
    int			health;
    int			armorpoints;
    // Armor type is 0-2.
    int			armortype;

    // Power ups. invinc and invis are tic counters.
    int			powers[NUMPOWERS];
    boolean		cards[NUMCARDS];
    boolean		backpack;

    // Frags, kills of other players.
    int			frags[MAXPLAYERS];
    weapontype_t	readyweapon;

    // Is wp_nochange if not changing.
    weapontype_t	pendingweapon;

    boolean		weaponowned[NUMWEAPONS];
    int			ammo[NUMAMMO];
    int			maxammo[NUMAMMO];

    // True if button down last tic.
    int			attackdown;
    int			usedown;

    // Bit flags, for cheats and debug.
    // See cheat_t, above.
    int			cheats;

    // Refired shots are less accurate.
    int			refire;

    // For intermission stats.
    int			killcount;
    int			itemcount;
    int			secretcount;

    // Hint messages.
    char*		message;

    // For screen flashing (red or bright).
    int			damagecount;
    int			bonuscount;

    // Who did damage (NULL for floors/ceilings).
    mobj_t*		attacker;

    // So gun flashes light up areas.
    int			extralight;

    // Current PLAYPAL, ???
    //  can be set to REDCOLORMAP for pain, etc.
    int			fixedcolormap;

    // Player skin colorshift,
    //  0-3 for which color to draw player.
    int			colormap;

    // Overlay view sprites (gun, etc).
    pspdef_t		psprites[NUMPSPRITES];

    // True if secret level has been done.
    boolean		didsecret;

} player_t;






#endif //PG_DOOM_PLAYER_H
