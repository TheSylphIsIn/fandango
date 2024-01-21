#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
#define FLAG_BOSS_FIGHT      (TEMP_FLAGS_START + 0xF)  // When fighting bosses, the player's items are restored at the end of the fight.
#define FLAG_DYNAMIC_LEVEL_ZONE     (TEMP_FLAGS_START + 0x10) // if this flag is set, enemy mon levels scale to yours and your pokemon do not gain Exp.
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F

#define FLAG_UNUSED_0x020    0x20 // Unused Flag
#define FLAG_UNUSED_0x021    0x21 // Unused Flag
#define FLAG_UNUSED_0x022    0x22 // Unused Flag
#define FLAG_UNUSED_0x023    0x23 // Unused Flag
#define FLAG_UNUSED_0x024    0x24 // Unused Flag
#define FLAG_UNUSED_0x025    0x25 // Unused Flag
#define FLAG_UNUSED_0x026    0x26 // Unused Flag
#define FLAG_UNUSED_0x027    0x27 // Unused Flag
#define FLAG_UNUSED_0x028    0x28 // Unused Flag
#define FLAG_UNUSED_0x029    0x29 // Unused Flag
#define FLAG_UNUSED_0x02A    0x2A // Unused Flag
#define FLAG_UNUSED_0x02B    0x2B // Unused Flag
#define FLAG_UNUSED_0x02C    0x2C // Unused Flag
#define FLAG_UNUSED_0x02D    0x2D // Unused Flag
#define FLAG_UNUSED_0x02E    0x2E // Unused Flag
#define FLAG_UNUSED_0x02F    0x2F // Unused Flag
#define FLAG_UNUSED_0x030    0x30 // Unused Flag
#define FLAG_UNUSED_0x031    0x31 // Unused Flag
#define FLAG_UNUSED_0x032    0x32 // Unused Flag
#define FLAG_UNUSED_0x033    0x33 // Unused Flag
#define FLAG_UNUSED_0x034    0x34 // Unused Flag
#define FLAG_UNUSED_0x035    0x35 // Unused Flag
#define FLAG_UNUSED_0x036    0x36 // Unused Flag
#define FLAG_UNUSED_0x037    0x37 // Unused Flag
#define FLAG_UNUSED_0x038    0x38 // Unused Flag
#define FLAG_UNUSED_0x039    0x39 // Unused Flag
#define FLAG_UNUSED_0x03A    0x3A // Unused Flag
#define FLAG_UNUSED_0x03B    0x3B // Unused Flag
#define FLAG_UNUSED_0x03C    0x3C // Unused Flag
#define FLAG_UNUSED_0x03D    0x3D // Unused Flag
#define FLAG_UNUSED_0x03E    0x3E // Unused Flag
#define FLAG_UNUSED_0x03F    0x3F // Unused Flag
#define FLAG_UNUSED_0x040    0x40 // Unused Flag
#define FLAG_UNUSED_0x041    0x41 // Unused Flag
#define FLAG_UNUSED_0x042    0x42 // Unused Flag
#define FLAG_UNUSED_0x043    0x43 // Unused Flag
#define FLAG_UNUSED_0x044    0x44 // Unused Flag
#define FLAG_UNUSED_0x045    0x45 // Unused Flag
#define FLAG_UNUSED_0x046    0x46 // Unused Flag
#define FLAG_UNUSED_0x047    0x47 // Unused Flag
#define FLAG_UNUSED_0x048    0x48 // Unused Flag
#define FLAG_UNUSED_0x049    0x49 // Unused Flag
#define FLAG_UNUSED_0x04A    0x4A // Unused Flag
#define FLAG_UNUSED_0x04B    0x4B // Unused Flag
#define FLAG_UNUSED_0x04C    0x4C // Unused Flag
#define FLAG_UNUSED_0x04D    0x4D // Unused Flag
#define FLAG_UNUSED_0x04E    0x4E // Unused Flag
#define FLAG_UNUSED_0x04F    0x4F // Unused Flag

#define FLAG_ACCEPT_CHEAT_CODES                  0x54  // Unused Flag
#define FLAG_UNUSED_0x055                    0x55  // Unused Flag

#define FLAG_HIDE_FONEI_COAST_NPCS                   0x57
#define FLAG_SHADED_PASS_ITEM_1              0x64 // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_SHADED_PASS_ITEM_2              0x65 //
#define FLAG_HIDE_SHADED_PASS_GIRL           0x66 //
#define FLAG_SHADED_PASS_HIDDEN_ITEM         0x67 //

#define FLAG_LOST_MANSION_ITEM_1             0x68  // Unused Flag

#define FLAG_PHANTOM_SOUL_GOT                0xE9 // Unused Flag

#define FLAG_LOST_MANSION_ITEM_2           0x13D // These Wonder Card flags are referenced but never set
#define FLAG_LOST_MANSION_ITEM_3           0x13E
#define FLAG_LOST_MANSION_ITEM_4            0x13F
#define FLAG_LOST_MANSION_ITEM_5           0x140


#define FLAG_UNUSED_0x1AA                    0x1AA // Unused Flag
#define FLAG_UNUSED_0x1AB                    0x1AB // Unused Flag

#define FLAG_UNUSED_0x1DA                    0x1DA // Unused Flag

#define FLAG_UNUSED_0x1DE                    0x1DE // Unused Flag
#define FLAG_UNUSED_0x1DF                    0x1DF // Unused Flag
#define FLAG_UNUSED_0x1E0                    0x1E0 // Unused Flag
#define FLAG_UNUSED_0x1E1                    0x1E1 // Unused Flag
#define FLAG_UNUSED_0x1E2                    0x1E2 // Unused Flag
#define FLAG_UNUSED_0x1E3                    0x1E3 // Unused Flag

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                                                         0x1F4
#define FLAG_DROPPER_POINT_STAR_PIECE             (FLAG_HIDDEN_ITEMS_START + 0x00)

#define FLAG_UNUSED_0x264  0x264 // Unused Flag
#define FLAG_UNUSED_0x265  0x265 // Unused Flag
#define FLAG_UNUSED_0x266  0x266 // Unused Flag
#define FLAG_UNUSED_0x267  0x267 // Unused Flag
#define FLAG_UNUSED_0x268  0x268 // Unused Flag
#define FLAG_UNUSED_0x269  0x269 // Unused Flag
#define FLAG_UNUSED_0x26A  0x26A // Unused Flag
#define FLAG_UNUSED_0x26B  0x26B // Unused Flag
#define FLAG_UNUSED_0x26C  0x26C // Unused Flag
#define FLAG_UNUSED_0x26D  0x26D // Unused Flag
#define FLAG_UNUSED_0x26E  0x26E // Unused Flag
#define FLAG_UNUSED_0x26F  0x26F // Unused Flag
#define FLAG_UNUSED_0x270  0x270 // Unused Flag
#define FLAG_UNUSED_0x271  0x271 // Unused Flag
#define FLAG_UNUSED_0x272  0x272 // Unused Flag
#define FLAG_UNUSED_0x273  0x273 // Unused Flag
#define FLAG_UNUSED_0x274  0x274 // Unused Flag
#define FLAG_UNUSED_0x275  0x275 // Unused Flag
#define FLAG_UNUSED_0x276  0x276 // Unused Flag
#define FLAG_UNUSED_0x277  0x277 // Unused Flag
#define FLAG_UNUSED_0x278  0x278 // Unused Flag
#define FLAG_UNUSED_0x279  0x279 // Unused Flag
#define FLAG_UNUSED_0x27A  0x27A // Unused Flag
#define FLAG_UNUSED_0x27B  0x27B // Unused Flag
#define FLAG_UNUSED_0x27C  0x27C // Unused Flag
#define FLAG_UNUSED_0x27D  0x27D // Unused Flag
#define FLAG_UNUSED_0x27E  0x27E // Unused Flag
#define FLAG_UNUSED_0x27F  0x27F // Unused Flag
#define FLAG_UNUSED_0x280  0x280 // Unused Flag
#define FLAG_UNUSED_0x281  0x281 // Unused Flag
#define FLAG_UNUSED_0x282  0x282 // Unused Flag
#define FLAG_UNUSED_0x283  0x283 // Unused Flag
#define FLAG_UNUSED_0x284  0x284 // Unused Flag
#define FLAG_UNUSED_0x285  0x285 // Unused Flag
#define FLAG_UNUSED_0x286  0x286 // Unused Flag
#define FLAG_UNUSED_0x287  0x287 // Unused Flag
#define FLAG_UNUSED_0x288  0x288 // Unused Flag
#define FLAG_UNUSED_0x289  0x289 // Unused Flag
#define FLAG_UNUSED_0x28A  0x28A // Unused Flag
#define FLAG_UNUSED_0x28B  0x28B // Unused Flag
#define FLAG_UNUSED_0x28C  0x28C // Unused Flag
#define FLAG_UNUSED_0x28D  0x28D // Unused Flag
#define FLAG_UNUSED_0x28E  0x28E // Unused Flag
#define FLAG_UNUSED_0x28F  0x28F // Unused Flag
#define FLAG_UNUSED_0x290  0x290 // Unused Flag
#define FLAG_UNUSED_0x291  0x291 // Unused Flag
#define FLAG_UNUSED_0x292  0x292 // Unused Flag
#define FLAG_UNUSED_0x293  0x293 // Unused Flag
#define FLAG_UNUSED_0x294  0x294 // Unused Flag
#define FLAG_UNUSED_0x295  0x295 // Unused Flag
#define FLAG_UNUSED_0x296  0x296 // Unused Flag
#define FLAG_UNUSED_0x297  0x297 // Unused Flag
#define FLAG_UNUSED_0x298  0x298 // Unused Flag
#define FLAG_UNUSED_0x299  0x299 // Unused Flag
#define FLAG_UNUSED_0x29A  0x29A // Unused Flag
#define FLAG_UNUSED_0x29B  0x29B // Unused Flag
#define FLAG_UNUSED_0x29C  0x29C // Unused Flag
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag
#define FLAG_UNUSED_0x29E  0x29E // Unused Flag
#define FLAG_UNUSED_0x29F  0x29F // Unused Flag
#define FLAG_UNUSED_0x2A0  0x2A0 // Unused Flag
#define FLAG_UNUSED_0x2A1  0x2A1 // Unused Flag
#define FLAG_UNUSED_0x2A2  0x2A2 // Unused Flag
#define FLAG_UNUSED_0x2A3  0x2A3 // Unused Flag
#define FLAG_UNUSED_0x2A4  0x2A4 // Unused Flag
#define FLAG_UNUSED_0x2A5  0x2A5 // Unused Flag
#define FLAG_UNUSED_0x2A6  0x2A6 // Unused Flag
#define FLAG_UNUSED_0x2A7  0x2A7 // Unused Flag
#define FLAG_UNUSED_0x2A8  0x2A8 // Unused Flag
#define FLAG_UNUSED_0x2A9  0x2A9 // Unused Flag
#define FLAG_UNUSED_0x2AA  0x2AA // Unused Flag
#define FLAG_UNUSED_0x2AB  0x2AB // Unused Flag
#define FLAG_UNUSED_0x2AC  0x2AC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x2AD // Unused Flag
#define FLAG_UNUSED_0x2AE  0x2AE // Unused Flag
#define FLAG_UNUSED_0x2AF  0x2AF // Unused Flag
#define FLAG_UNUSED_0x2B0  0x2B0 // Unused Flag
#define FLAG_UNUSED_0x2B1  0x2B1 // Unused Flag
#define FLAG_UNUSED_0x2B2  0x2B2 // Unused Flag
#define FLAG_UNUSED_0x2B3  0x2B3 // Unused Flag
#define FLAG_UNUSED_0x2B4  0x2B4 // Unused Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_UNUSED_0x2B8  0x2B8 // Unused Flag
#define FLAG_UNUSED_0x2B9  0x2B9 // Unused Flag
#define FLAG_UNUSED_0x2BA  0x2BA // Unused Flag
#define FLAG_UNUSED_0x2BB  0x2BB // Unused Flag

#define FLAG_UNUSED_0x2D9                                           0x2D9 // Unused Flag


// Item Ball Flags
#define FLAG_ITEM_FIRST_TRAIL_POTION                                  0x3E8
#define FLAG_STAR_PIECE_FIRST_TRAIL                               0x3E9
#define FLAG_ITEM_FIRST_TRAIL_PP_UP                                   0x3EA
#define FLAG_ITEM_FISHEYE_LAKE_GREAT_BALL                                 0x3EB
#define FLAG_ITEM_FISHEYE_LAKE_SUPER_POTION                                 0x3EC
#define FLAG_FISHEYE_LAKE_STAR_PIECE                                   0x3ED
#define FLAG_ITEM_FROZEN_FISH_CAVE_X_DEFENSE                              0x3EE
#define FLAG_ITEM_FROZEN_FISH_CAVE_X_ATTACK                                0x3EF

#define FLAG_FAVORED_MORGAN 0x493 // These flags are set and cleared at various points depending on how you interact with your rivals.
#define FLAG_FAVORED_CALVIN 0x494 // For example, battling them in the clearing sets their flag, which affects which one you battle on the cliffs.
#define FLAG_HIDE_MORGAN_FISHEYE                                           0x495 // Unused Flag
#define FLAG_HIDE_CALVIN_FISHEYE                               0x496 // Unused Flag
#define FLAG_HIDE_MORGAN_INTRO                                           0x497 // Unused Flag
#define FLAG_HIDE_CALVIN_INTRO                                           0x498 // Unused Flag
#define FLAG_HIDE_SLEEPING_MORGAN_INTRO                                          0x499 // Unused Flag
#define FLAG_HIDE_SLEEPING_CALVIN_INTRO                                           0x49A // Unused Flag
#define FLAG_RECOVERED_ABILITY_SCANNER                                           0x49B // Unused Flag
#define FLAG_UNUSED_0x49C                                           0x49C // Unused Flag
#define FLAG_UNUSED_0x49D                                           0x49D // Unused Flag
#define FLAG_UNUSED_0x49E                                           0x49E // Unused Flag
#define FLAG_UNUSED_0x49F                                           0x49F // Unused Flag
#define FLAG_UNUSED_0x4A0                                           0x4A0 // Unused Flag
#define FLAG_UNUSED_0x4A1                                           0x4A1 // Unused Flag
#define FLAG_UNUSED_0x4A2                                           0x4A2 // Unused Flag
#define FLAG_UNUSED_0x4A3                                           0x4A3 // Unused Flag
#define FLAG_UNUSED_0x4A4                                           0x4A4 // Unused Flag
#define FLAG_UNUSED_0x4A5                                           0x4A5 // Unused Flag
#define FLAG_UNUSED_0x4A6                                           0x4A6 // Unused Flag
#define FLAG_UNUSED_0x4A7                                           0x4A7 // Unused Flag
#define FLAG_UNUSED_0x4A8                                           0x4A8 // Unused Flag
#define FLAG_UNUSED_0x4A9                                           0x4A9 // Unused Flag
#define FLAG_UNUSED_0x4AA                                           0x4AA // Unused Flag
#define FLAG_UNUSED_0x4AB                                           0x4AB // Unused Flag
#define FLAG_UNUSED_0x4AC                                           0x4AC // Unused Flag
#define FLAG_UNUSED_0x4AD                                           0x4AD // Unused Flag
#define FLAG_UNUSED_0x4AE                                           0x4AE // Unused Flag
#define FLAG_UNUSED_0x4AF                                           0x4AF // Unused Flag
#define FLAG_UNUSED_0x4B0                                           0x4B0 // Unused Flag
#define FLAG_UNUSED_0x4B1                                           0x4B1 // Unused Flag
#define FLAG_UNUSED_0x4B2                                           0x4B2 // Unused Flag
#define FLAG_UNUSED_0x4B3                                           0x4B3 // Unused Flag
#define FLAG_UNUSED_0x4B4                                           0x4B4 // Unused Flag
#define FLAG_UNUSED_0x4B5                                           0x4B5 // Unused Flag
#define FLAG_UNUSED_0x4B6                                           0x4B6 // Unused Flag
#define FLAG_UNUSED_0x4B7                                           0x4B7 // Unused Flag
#define FLAG_UNUSED_0x4B8                                           0x4B8 // Unused Flag
#define FLAG_UNUSED_0x4B9                                           0x4B9 // Unused Flag
#define FLAG_UNUSED_0x4BA                                           0x4BA // Unused Flag
#define FLAG_UNUSED_0x4BB                                           0x4BB // Unused Flag
#define FLAG_UNUSED_0x4BC                                           0x4BC // Unused Flag
#define FLAG_UNUSED_0x4BD                                           0x4BD // Unused Flag
#define FLAG_UNUSED_0x4BE                                           0x4BE // Unused Flag
#define FLAG_UNUSED_0x4BF                                           0x4BF // Unused Flag
#define FLAG_UNUSED_0x4C0                                           0x4C0 // Unused Flag
#define FLAG_UNUSED_0x4C1                                           0x4C1 // Unused Flag
#define FLAG_UNUSED_0x4C2                                           0x4C2 // Unused Flag
#define FLAG_UNUSED_0x4C3                                           0x4C3 // Unused Flag
#define FLAG_UNUSED_0x4C4                                           0x4C4 // Unused Flag
#define FLAG_UNUSED_0x4C5                                           0x4C5 // Unused Flag
#define FLAG_UNUSED_0x4C6                                           0x4C6 // Unused Flag
#define FLAG_UNUSED_0x4C7                                           0x4C7 // Unused Flag
#define FLAG_UNUSED_0x4C8                                           0x4C8 // Unused Flag
#define FLAG_UNUSED_0x4C9                                           0x4C9 // Unused Flag
#define FLAG_UNUSED_0x4CA                                           0x4CA // Unused Flag
#define FLAG_UNUSED_0x4CB                                           0x4CB // Unused Flag
#define FLAG_UNUSED_0x4CC                                           0x4CC // Unused Flag
#define FLAG_UNUSED_0x4CD                                           0x4CD // Unused Flag
#define FLAG_UNUSED_0x4CE                                           0x4CE // Unused Flag
#define FLAG_UNUSED_0x4CF                                           0x4CF // Unused Flag
#define FLAG_UNUSED_0x4D0                                           0x4D0 // Unused Flag
#define FLAG_UNUSED_0x4D1                                           0x4D1 // Unused Flag
#define FLAG_UNUSED_0x4D2                                           0x4D2 // Unused Flag
#define FLAG_UNUSED_0x4D3                                           0x4D3 // Unused Flag
#define FLAG_UNUSED_0x4D4                                           0x4D4 // Unused Flag
#define FLAG_UNUSED_0x4D5                                           0x4D5 // Unused Flag
#define FLAG_UNUSED_0x4D6                                           0x4D6 // Unused Flag
#define FLAG_UNUSED_0x4D7                                           0x4D7 // Unused Flag
#define FLAG_UNUSED_0x4D8                                           0x4D8 // Unused Flag
#define FLAG_UNUSED_0x4D9                                           0x4D9 // Unused Flag
#define FLAG_UNUSED_0x4DA                                           0x4DA // Unused Flag
#define FLAG_UNUSED_0x4DB                                           0x4DB // Unused Flag
#define FLAG_UNUSED_0x4DC                                           0x4DC // Unused Flag
#define FLAG_UNUSED_0x4DD                                           0x4DD // Unused Flag
#define FLAG_UNUSED_0x4DE                                           0x4DE // Unused Flag
#define FLAG_UNUSED_0x4DF                                           0x4DF // Unused Flag
#define FLAG_UNUSED_0x4E0                                           0x4E0 // Unused Flag
#define FLAG_UNUSED_0x4E1                                           0x4E1 // Unused Flag
#define FLAG_UNUSED_0x4E2                                           0x4E2 // Unused Flag
#define FLAG_UNUSED_0x4E3                                           0x4E3 // Unused Flag
#define FLAG_UNUSED_0x4E4                                           0x4E4 // Unused Flag
#define FLAG_UNUSED_0x4E5                                           0x4E5 // Unused Flag
#define FLAG_UNUSED_0x4E6                                           0x4E6 // Unused Flag
#define FLAG_UNUSED_0x4E7                                           0x4E7 // Unused Flag
#define FLAG_UNUSED_0x4E8                                           0x4E8 // Unused Flag
#define FLAG_UNUSED_0x4E9                                           0x4E9 // Unused Flag
#define FLAG_UNUSED_0x4EA                                           0x4EA // Unused Flag
#define FLAG_UNUSED_0x4EB                                           0x4EB // Unused Flag
#define FLAG_UNUSED_0x4EC                                           0x4EC // Unused Flag
#define FLAG_UNUSED_0x4ED                                           0x4ED // Unused Flag
#define FLAG_UNUSED_0x4EE                                           0x4EE // Unused Flag
#define FLAG_UNUSED_0x4EF                                           0x4EF // Unused Flag

#define FLAG_UNUSED_0x4FF                                           0x4FF // Unused Flag

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_UNUSED_0x863                            (SYSTEM_FLAGS + 0x3) // Unused Flag
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                 (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_SYS_NO_LEVEL_CAPS                           (SYSTEM_FLAGS + 0x21) // if set, level caps won't modify Exp
#define FLAG_SYS_ENABLE_STARTER_SETS                           (SYSTEM_FLAGS + 0x22) // Unused Flag
#define FLAG_SPAWN_INVISIBLE                           (SYSTEM_FLAGS + 0x23) // Unused Flag
#define FLAG_UNUSED_0x884                           (SYSTEM_FLAGS + 0x24) // Unused Flag
#define FLAG_UNUSED_0x885                           (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_UNUSED_0x886                           (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_UNUSED_0x887                           (SYSTEM_FLAGS + 0x27) // Unused Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_DEFAULT_HIDDEN                         (SYSTEM_FLAGS + 0x2E) // For objects that only appear during cutscenes
#define FLAG_UNUSED_0x88F                           (SYSTEM_FLAGS + 0x2F) // Unused Flag

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_SYS_B_DASH_WATER                           (SYSTEM_FLAGS + 0x83) // Unused Flag

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_HELD_ITEMS_STORED                           (SYSTEM_FLAGS + 0x85) // Used to remember that held items were saved, so they don't get overwritten if they weren't
#define FLAG_EGG_MOVE_TUTOR                           (SYSTEM_FLAGS + 0x86) // If set, the move reminder will remind Egg moves instead of level moves.
#define FLAG_PORTABLE_HEAL_USED                           (SYSTEM_FLAGS + 0x87) // The cheat code heal can only be used once until the next time a regular heal is used.
#define FLAG_DISABLE_ENCOUNTERS                           (SYSTEM_FLAGS + 0x88) // Set by a cheat code. Disables random wild encounters.
#define FLAG_DISABLE_TRAINER_SIGHT                           (SYSTEM_FLAGS + 0x89) // Set by a cheat code. Disables trainers seeing you. They can still be fought by interacting.
#define FLAG_FREE_HMS                           (SYSTEM_FLAGS + 0x8A) // Skips the "mon in party can learn HM" check
#define FLAG_FAST_HMS                           (SYSTEM_FLAGS + 0x8B) // Skips the field effect animation 
#define FLAG_UNUSED_0x8EC                           (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_UNUSED_0x8ED                           (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_UNUSED_0x8EE                           (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_UNUSED_0x8EF                           (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_UNUSED_0x8F0                           (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_UNUSED_0x8F1                           (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_UNUSED_0x8F2                           (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)

// Achievements
#define ACHIEVEMENT_BEAT_FIRST_BOSS 1
#define ACHIEVEMENT_BEAT_SECOND_BOSS 2
#define ACHIEVEMENT_BEAT_THIRD_BOSS 3
#define ACHIEVEMENT_REGION_WALK 4
#define ACHIEVEMENT_REGION_LOOP 5
#define NUM_ACHIEVEMENTS 64

#include "constants/old_flags.h" // Emerald flags that I don't feel like removing all references to right now

#endif // GUARD_CONSTANTS_FLAGS_H
