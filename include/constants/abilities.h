#ifndef GUARD_CONSTANTS_ABILITIES_H
#define GUARD_CONSTANTS_ABILITIES_H

#define ABILITY_NONE 0
#define ABILITY_STENCH 1
#define ABILITY_DRIZZLE 2
#define ABILITY_SPEED_BOOST 3
#define ABILITY_BATTLE_ARMOR 4
#define ABILITY_STURDY 5
#define ABILITY_DAMP 6
#define ABILITY_LIMBER 7
#define ABILITY_SAND_VEIL 8
#define ABILITY_STATIC 9
#define ABILITY_VOLT_ABSORB 10
#define ABILITY_WATER_ABSORB 11
#define ABILITY_OBLIVIOUS 12
#define ABILITY_CLOUD_NINE 13
#define ABILITY_COMPOUND_EYES 14
#define ABILITY_INSOMNIA 15
#define ABILITY_COLOR_CHANGE 16
#define ABILITY_IMMUNITY 17
#define ABILITY_FLASH_FIRE 18
#define ABILITY_SHIELD_DUST 19
#define ABILITY_OWN_TEMPO 20
#define ABILITY_SUCTION_CUPS 21
#define ABILITY_INTIMIDATE 22
#define ABILITY_SHADOW_TAG 23
#define ABILITY_ROUGH_SKIN 24
#define ABILITY_WONDER_GUARD 25
#define ABILITY_LEVITATE 26
#define ABILITY_EFFECT_SPORE 27
#define ABILITY_SYNCHRONIZE 28
#define ABILITY_CLEAR_BODY 29
#define ABILITY_NATURAL_CURE 30
#define ABILITY_LIGHTNING_ROD 31
#define ABILITY_SERENE_GRACE 32
#define ABILITY_SWIFT_SWIM 33
#define ABILITY_CHLOROPHYLL 34
#define ABILITY_ILLUMINATE 35
#define ABILITY_TRACE 36
#define ABILITY_HUGE_POWER 37
#define ABILITY_POISON_POINT 38
#define ABILITY_INNER_FOCUS 39
#define ABILITY_MAGMA_ARMOR 40
#define ABILITY_WATER_VEIL 41
#define ABILITY_MAGNET_PULL 42
#define ABILITY_SOUNDPROOF 43
#define ABILITY_RAIN_DISH 44
#define ABILITY_SAND_STREAM 45
#define ABILITY_PRESSURE 46
#define ABILITY_THICK_FAT 47
#define ABILITY_EARLY_BIRD 48
#define ABILITY_FLAME_BODY 49
#define ABILITY_RUN_AWAY 50
#define ABILITY_KEEN_EYE 51
#define ABILITY_HYPER_CUTTER 52
#define ABILITY_PICKUP 53
#define ABILITY_TRUANT 54
#define ABILITY_HUSTLE 55
#define ABILITY_CUTE_CHARM 56
#define ABILITY_PLUS 57
#define ABILITY_MINUS 58
#define ABILITY_FORECAST 59
#define ABILITY_STICKY_HOLD 60
#define ABILITY_SHED_SKIN 61
#define ABILITY_GUTS 62
#define ABILITY_MARVEL_SCALE 63
#define ABILITY_LIQUID_OOZE 64
#define ABILITY_OVERGROW 65
#define ABILITY_BLAZE 66
#define ABILITY_TORRENT 67
#define ABILITY_SWARM 68
#define ABILITY_ROCK_HEAD 69
#define ABILITY_DROUGHT 70
#define ABILITY_ARENA_TRAP 71
#define ABILITY_VITAL_SPIRIT 72
#define ABILITY_WHITE_SMOKE 73
#define ABILITY_PURE_POWER 74
#define ABILITY_SHELL_ARMOR 75
#define ABILITY_CACOPHONY 76 // has punk rock's effects
#define ABILITY_AIR_LOCK 77
#define ABILITY_DOWNPOUR 78 // primordial sea but permanent
#define ABILITY_DESOLATION 79 // desolate land but permanent
#define ABILITY_SNOW_WARNING 80
#define ABILITY_ICE_BODY 81
#define ABILITY_SOLAR_POWER 82
#define ABILITY_SLUSH_RUSH 83
#define ABILITY_SAND_FORCE 84 // physical sand solar power
#define ABILITY_SAND_RUSH 85
#define ABILITY_SNOW_CLOAK 86
#define ABILITY_WHITEOUT 87 // physical hail solar power
#define ABILITY_REFRIGERATE 88
#define ABILITY_PIXILATE 89
#define ABILITY_AERIALATE 90
#define ABILITY_GALVANIZE 91
#define ABILITY_BURNINATE 92
#define ABILITY_FUR_COAT 93
#define ABILITY_SHEER_FORCE 94
#define ABILITY_TINTED_LENS 95
#define ABILITY_IRON_FIST 96
#define ABILITY_ADAPTABILITY 97
#define ABILITY_SUPER_TOUGH 98 // solid rock/filter
#define ABILITY_RESOLVE 99 // special guts
#define ABILITY_BRAIN_POWER 100 // special huge power
#define ABILITY_UNAWARE 101
#define ABILITY_SLIME_COAT 102 // special fur coat
#define ABILITY_SPECIALIST 103 // double-single type
#define ABILITY_EXPLOITATIVE 104 //SE moves do 3x damage; resisted moves do 1/3 damage
#define ABILITY_MAGIC_GUARD 105
#define ABILITY_NO_GUARD 106
#define ABILITY_TOUGH_CLAWS 107
#define ABILITY_HYDRATION 108
#define ABILITY_LEAF_GUARD 109 // sun hydration
#define ABILITY_DEFENDER 110 // defensive field effect (e.g. reflect) duration up
#define ABILITY_SOPORIFIC 111 // when user inflicts sleep, it lasts for max turns
#define ABILITY_TECHNICIAN 112
#define ABILITY_SKILL_LINK 113
#define ABILITY_PRANKSTER 114
#define ABILITY_MAGIC_BOUNCE 115
#define ABILITY_QUICK_FEET 116
#define ABILITY_KLUTZ 117
#define ABILITY_MOTOR_DRIVE 118
#define ABILITY_LULL 119
#define ABILITY_MOLD_BREAKER 120
#define ABILITY_STORM_DRAIN 121
#define ABILITY_WATER_COMPACTION 122
#define ABILITY_TERAVOLT 123
#define ABILITY_TURBOBLAZE 124
#define ABILITY_SCRAPPY 125
#define ABILITY_TRUESIGHT 126
#define ABILITY_WEAK_ARMOR 127
#define ABILITY_MOXIE 128
#define ABILITY_REGENERATOR 129
#define ABILITY_SAP_SIPPER 130
#define ABILITY_SIMPLE 131
#define ABILITY_STAMINA 132
#define ABILITY_CORROSION 133
#define ABILITY_FOREWARN 134
#define ABILITY_STALL 135
#define ABILITY_TIME_SLIP 136
#define ABILITY_GALE_WINGS 137
#define ABILITY_DAZZLING 138
#define ABILITY_SNIPER 139
#define ABILITY_STEELWORKER 140
#define ABILITY_FIRE_AFFINITY 141
#define ABILITY_UMBRALAMP 142
#define ABILITY_SPELL_SWAP 143
#define ABILITY_SHIELDS_DOWN 144
#define ABILITY_SHIELDS_UP 145
#define ABILITY_PURITY 146
#define ABILITY_ANALYTIC 147
#define ABILITY_DISGUISE 148

#define ABILITIES_COUNT 149
#define ABILITIES_ATE_START ABILITY_REFRIGERATE
#define ABILITIES_ATE_END ABILITY_BURNINATE + 1
#define ABILITIES_NUM_ATES ABILITIES_ATE_END - ABILITIES_ATE_START

#endif  // GUARD_CONSTANTS_ABILITIES_H
