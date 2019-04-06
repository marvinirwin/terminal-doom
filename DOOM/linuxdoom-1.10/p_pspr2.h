//
// Created by Frodo on 2019-04-05.
//

#ifndef PG_DOOM_P_PSPR2_H
#define PG_DOOM_P_PSPR2_H


#include <player.h>

void A_BFGSpray(mobj_t *mo);
void A_BFGsound(player_t *player, pspdef_t *psp);

void A_Light1(player_t *player, pspdef_t *psp);

void
A_WeaponReady
        ( player_t*	player,
          pspdef_t*	psp );

void P_CalcSwing (player_t*	player);



//
// P_BringUpWeapon
// Starts bringing the pending weapon up
// from the bottom of the screen.
// Uses player
//
void P_BringUpWeapon (player_t* player);

//
// P_CheckAmmo
// Returns true if there is enough ammo to shoot.
// If not, selects the next weapon to use.
//
boolean P_CheckAmmo (player_t* player);


//
// P_FireWeapon.
//
void P_FireWeapon (player_t* player);



//
// P_DropWeapon
// Player died, so put the weapon away.
//
void P_DropWeapon (player_t* player);

//
// a_refire
// the player can re-fire the weapon
// without lowering it entirely.
//
void a_refire
        ( player_t*	player,
          pspdef_t*	psp );


void
a_checkreload
        ( player_t*	player,
          pspdef_t*	psp );



//
// a_lower
// lowers current weapon,
//  and changes weapon at bottom.
//
void
a_lower
        ( player_t*	player,
          pspdef_t*	psp );


//
// a_raise
//
void
a_raise
        ( player_t*	player,
          pspdef_t*	psp );



//
// a_gunflash
//
void
a_gunflash
        ( player_t*	player,
          pspdef_t*	psp );



//
// weapon attacks
//


//
// a_punch
//
void
a_punch
        ( player_t*	player,
          pspdef_t*	psp );


//
// a_saw
//
void
a_saw
        ( player_t*	player,
          pspdef_t*	psp );



//
// a_firemissile
//
void
a_firemissile
        ( player_t*	player,
          pspdef_t*	psp );


//
// a_firebfg
//
void
a_firebfg
        ( player_t*	player,
          pspdef_t*	psp );




//
// A_FirePlasma
//
void
A_FirePlasma
        ( player_t*	player,
          pspdef_t*	psp );

void P_BulletSlope (mobj_t*	mo);


//
// P_GunShot
//
void
P_GunShot
        ( mobj_t*	mo,
          boolean	accurate );


//
// A_FirePistol
//
void
A_FirePistol
        ( player_t*	player,
          pspdef_t*	psp );


//
// A_FireShotgun
//
void
A_FireShotgun
        ( player_t*	player,
          pspdef_t*	psp );

//
// A_FireShotgun2
//
void
A_FireShotgun2
        ( player_t*	player,
          pspdef_t*	psp );


//
// A_FireCGun
//
void
A_FireCGun
        ( player_t*	player,
          pspdef_t*	psp );

void A_Light0 (player_t *player, pspdef_t *psp);

void P_CalcSwing(player_t *player);

void A_Light2(player_t *player, pspdef_t *psp);

boolean P_CheckAmmo(player_t *player);

void P_FireWeapon(player_t *player);

void P_DropWeapon(player_t *player);

void A_ReFire(player_t *player, pspdef_t *psp);

void A_CheckReload(player_t *player, pspdef_t *psp);

void A_Lower(player_t *player, pspdef_t *psp);

void A_Raise(player_t *player, pspdef_t *psp);

void A_GunFlash(player_t *player, pspdef_t *psp);

void A_Punch(player_t *player, pspdef_t *psp);

void A_Saw(player_t *player, pspdef_t *psp);

void A_FireMissile(player_t *player, pspdef_t *psp);

void A_FireBFG(player_t *player, pspdef_t *psp);

void A_FirePlasma(player_t *player, pspdef_t *psp);

void P_GunShot(mobj_t *mo, boolean accurate);

void A_FirePistol(player_t *player, pspdef_t *psp);

void A_Light2(player_t *player, pspdef_t *psp);

void P_CalcSwing(player_t *player);

boolean P_CheckAmmo(player_t *player);

void P_FireWeapon(player_t *player);

void P_DropWeapon(player_t *player);

void A_ReFire(player_t *player, pspdef_t *psp);

void A_ReFire(player_t *player, pspdef_t *psp);

void A_Lower(player_t *player, pspdef_t *psp);

void P_SetupPsprites(player_t *player);



//
// P_SetupPsprites
// Called at start of level for each player.
//
void P_SetupPsprites (player_t* player);




//
// P_MovePsprites
// Called every tic by player thinking routine.
//
void P_MovePsprites (player_t* player);



#endif //PG_DOOM_P_PSPR2_H
