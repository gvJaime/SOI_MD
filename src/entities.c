#include "entities.h"

#include "sprites.h"
#include "sound.h"

const Entity blue_player_ent = {
    BLUE_PLAYER,
    {2, 15},
    {7, 15},
    PAL_SYS0,
    &bp_spr,
    moon_blast,
    sizeof(moon_blast)
};

const Entity green_player_ent = {
    GREEN_PLAYER,
    {2, 15},
    {7, 15},
    PAL_SYS1,
    &bp_spr,
    moon_blast,
    sizeof(moon_blast)
};
const Entity spinner_ent = {
    NASTIE | STILL,
    {6, 15},
    {7, 15},
    PAL_SYS0,
    &spinner_spr,
    0,
    0
};

const Entity robo_ent = {
    NASTIE | WALKS | DIES_ON_LEAP | BREAKS | GOES_THRU,
    {4, 15},
    {7, 15},
    PAL_SYS0,
    &robo_spr,
    bell,
    sizeof(bell)
};

const Entity ant_ent = {
    NASTIE | WALKS | LEAPS,
    {7, 8},
    {7, 8},
    PAL_SYS0,
    &ant_spr,
    0,
    0
};

const Entity piggy_ent = {
    NASTIE | WALKS | LEAPS | DELETES,
    {7, 15},
    {7, 15},
    PAL_SYS1,
    &piggy_spr,
    0,
    0
};

const Entity arrow_ent = {
    PROJECTILE | FLIES ,
    {7, 15},
    {7, 15},
    PAL_SYS0,
    &arrow_spr,
    0,
    0
};

const Entity deletor_ent = {
    FX | DELETER,
    {7, 15},
    {7, 15},
    PAL_SYS0,
    &deletor_spr,
    0,
    0
};

const Entity blk_debris0_ent = {
    FX | SHRAPNEL,
    {4, 8},
    {4, 4},
    PAL_SYS0,
    &blk_debris0_spr,
    0,
    0
};

const Entity blk_debris1_ent = {
    FX | SHRAPNEL,
    {4, 8},
    {4, 4},
    PAL_SYS0,
    &blk_debris1_spr,
    0,
    0
};

const Entity blk_debris2_ent = {
    FX | SHRAPNEL,
    {4, 8},
    {4, 4},
    PAL_SYS0,
    &blk_debris2_spr,
    0,
    0
};

const Entity blk_debris3_ent = {
    FX | SHRAPNEL,
    {4, 8},
    {4, 4},
    PAL_SYS0,
    &blk_debris3_spr,
    0,
    0
};