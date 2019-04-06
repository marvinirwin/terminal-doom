cmake_minimum_required(VERSION 3.13)
project(pg_doom C)

set(CMAKE_C_STANDARD 11)

include_directories(DOOM/linuxdoom-1.10)

#-g -Wall -DNORMALUNIX -DMACOS # -DUSEASM
SET(DEBUG -g)
SET(WALL -Wall)
SET(NORMALUNIX -DNORMALUNIX)
SET(MACOS -DMACOS)
SET(FLAG32 -m32)
SET(CMAKE_C_FLAGS "-m32")
SET(NO_CURSES -DNO_CURSES)

add_definitions(${DEBUG} ${WALL} ${NORMALUNIX} ${MACOS} ${FLAGS32})


add_executable(pg_doom
        DOOM/linuxdoom-1.10/am_map.c
        DOOM/linuxdoom-1.10/am_map.h
        DOOM/linuxdoom-1.10/d_englsh.h
        DOOM/linuxdoom-1.10/d_event.h
        DOOM/linuxdoom-1.10/d_french.h
        DOOM/linuxdoom-1.10/d_items.c
        DOOM/linuxdoom-1.10/d_items.h
        DOOM/linuxdoom-1.10/d_main.c
        DOOM/linuxdoom-1.10/d_main.h
        DOOM/linuxdoom-1.10/d_net.c
        DOOM/linuxdoom-1.10/d_net.h
        DOOM/linuxdoom-1.10/d_player.h
        DOOM/linuxdoom-1.10/d_textur.h
        DOOM/linuxdoom-1.10/d_think.h
        DOOM/linuxdoom-1.10/d_ticcmd.h
        DOOM/linuxdoom-1.10/doomdata.h
        DOOM/linuxdoom-1.10/doomdef.c
        DOOM/linuxdoom-1.10/doomdef.h
        DOOM/linuxdoom-1.10/doomstat.c
        DOOM/linuxdoom-1.10/doomstat.h
        DOOM/linuxdoom-1.10/doomtype.h
        DOOM/linuxdoom-1.10/dstrings.c
        DOOM/linuxdoom-1.10/dstrings.h
        DOOM/linuxdoom-1.10/f_finale.c
        DOOM/linuxdoom-1.10/f_finale.h
        DOOM/linuxdoom-1.10/f_wipe.c
        DOOM/linuxdoom-1.10/f_wipe.h
        DOOM/linuxdoom-1.10/g_game.c
        DOOM/linuxdoom-1.10/g_game.h
        DOOM/linuxdoom-1.10/hu_lib.c
        DOOM/linuxdoom-1.10/hu_lib.h
        DOOM/linuxdoom-1.10/hu_stuff.c
        DOOM/linuxdoom-1.10/hu_stuff.h
        DOOM/linuxdoom-1.10/i_main.c
        DOOM/linuxdoom-1.10/i_net.c
        DOOM/linuxdoom-1.10/i_net.h
        DOOM/linuxdoom-1.10/i_sound.c
        DOOM/linuxdoom-1.10/i_sound.h
        DOOM/linuxdoom-1.10/i_system.c
        DOOM/linuxdoom-1.10/i_system.h
        DOOM/linuxdoom-1.10/i_video.c
        DOOM/linuxdoom-1.10/i_video.h
        DOOM/linuxdoom-1.10/info.c
        DOOM/linuxdoom-1.10/info.h
        DOOM/linuxdoom-1.10/m_argv.c
        DOOM/linuxdoom-1.10/m_argv.h
        DOOM/linuxdoom-1.10/m_bbox.c
        DOOM/linuxdoom-1.10/m_bbox.h
        DOOM/linuxdoom-1.10/m_cheat.c
        DOOM/linuxdoom-1.10/m_cheat.h
        DOOM/linuxdoom-1.10/m_fixed.c
        DOOM/linuxdoom-1.10/m_fixed.h
        DOOM/linuxdoom-1.10/m_menu.c
        DOOM/linuxdoom-1.10/m_menu.h
        DOOM/linuxdoom-1.10/m_misc.c
        DOOM/linuxdoom-1.10/m_misc.h
        DOOM/linuxdoom-1.10/m_random.c
        DOOM/linuxdoom-1.10/m_random.h
        DOOM/linuxdoom-1.10/m_swap.c
        DOOM/linuxdoom-1.10/m_swap.h
        DOOM/linuxdoom-1.10/p_ceilng.c
        DOOM/linuxdoom-1.10/p_doors.c
        DOOM/linuxdoom-1.10/p_enemy.c
        DOOM/linuxdoom-1.10/p_floor.c
        DOOM/linuxdoom-1.10/p_inter.c
        DOOM/linuxdoom-1.10/p_inter.h
        DOOM/linuxdoom-1.10/p_lights.c
        DOOM/linuxdoom-1.10/p_local.h
        DOOM/linuxdoom-1.10/p_map.c
        DOOM/linuxdoom-1.10/p_maputl.c
        DOOM/linuxdoom-1.10/p_mobj.c
        DOOM/linuxdoom-1.10/p_mobj.h
        DOOM/linuxdoom-1.10/p_plats.c
        DOOM/linuxdoom-1.10/p_pspr.c
        DOOM/linuxdoom-1.10/p_pspr.h
        DOOM/linuxdoom-1.10/p_saveg.c
        DOOM/linuxdoom-1.10/p_saveg.h
        DOOM/linuxdoom-1.10/p_setup.c
        DOOM/linuxdoom-1.10/p_setup.h
        DOOM/linuxdoom-1.10/p_sight.c
        DOOM/linuxdoom-1.10/p_spec.c
        DOOM/linuxdoom-1.10/p_spec.h
        DOOM/linuxdoom-1.10/p_switch.c
        DOOM/linuxdoom-1.10/p_telept.c
        DOOM/linuxdoom-1.10/p_tick.c
        DOOM/linuxdoom-1.10/p_tick.h
        DOOM/linuxdoom-1.10/p_user.c
        DOOM/linuxdoom-1.10/r_bsp.c
        DOOM/linuxdoom-1.10/r_bsp.h
        DOOM/linuxdoom-1.10/r_data.c
        DOOM/linuxdoom-1.10/r_data.h
        DOOM/linuxdoom-1.10/r_defs.h
        DOOM/linuxdoom-1.10/r_draw.c
        DOOM/linuxdoom-1.10/r_draw.h
        DOOM/linuxdoom-1.10/r_local.h
        DOOM/linuxdoom-1.10/r_main.c
        DOOM/linuxdoom-1.10/r_main.h
        DOOM/linuxdoom-1.10/r_plane.c
        DOOM/linuxdoom-1.10/r_plane.h
        DOOM/linuxdoom-1.10/r_segs.c
        DOOM/linuxdoom-1.10/r_segs.h
        DOOM/linuxdoom-1.10/r_sky.c
        DOOM/linuxdoom-1.10/r_sky.h
        DOOM/linuxdoom-1.10/r_state.h
        DOOM/linuxdoom-1.10/r_things.c
        DOOM/linuxdoom-1.10/r_things.h
        DOOM/linuxdoom-1.10/s_sound.c
        DOOM/linuxdoom-1.10/s_sound.h
        DOOM/linuxdoom-1.10/sounds.c
        DOOM/linuxdoom-1.10/sounds.h
        DOOM/linuxdoom-1.10/st_lib.c
        DOOM/linuxdoom-1.10/st_lib.h
        DOOM/linuxdoom-1.10/st_stuff.c
        DOOM/linuxdoom-1.10/st_stuff.h
        DOOM/linuxdoom-1.10/tables.c
        DOOM/linuxdoom-1.10/tables.h
        DOOM/linuxdoom-1.10/v_video.c
        DOOM/linuxdoom-1.10/v_video.h
        DOOM/linuxdoom-1.10/values.h
        DOOM/linuxdoom-1.10/w_wad.c
        DOOM/linuxdoom-1.10/w_wad.h
        DOOM/linuxdoom-1.10/wi_stuff.c
        DOOM/linuxdoom-1.10/wi_stuff.h
        DOOM/linuxdoom-1.10/xlib_hack.c
        DOOM/linuxdoom-1.10/xlib_hack.h
        DOOM/linuxdoom-1.10/z_zone.c
        DOOM/linuxdoom-1.10/z_zone.h
        DOOM/linuxdoom-1.10/pcx.c
        DOOM/linuxdoom-1.10/pcx.h
        DOOM/linuxdoom-1.10/bitmap.c
        DOOM/linuxdoom-1.10/bitmap.h
        DOOM/linuxdoom-1.10/palette.h
        DOOM/linuxdoom-1.10/palette.c
        DOOM/linuxdoom-1.10/pixel.h
        DOOM/linuxdoom-1.10/color.c
        DOOM/linuxdoom-1.10/color.h
        )
# find_package(Curses REQUIRED)

target_link_libraries(pg_doom /Volumes/Xcode/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk/usr/lib/libcurses.tbd)
