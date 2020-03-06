#include "board.h"
#include "palettes.h"
#include "blocks.h"

#define XOFF 1
#define YOFF 1
#define IND_TO_X(ind)   (ind % BOARD_X)
#define IND_TO_Y(ind)   (ind / BOARD_Y)
#define XY_TO_IND(x ,y) (y * BOARD_X + x)

u8 load_board(Board * board, const Board * level){
    memcpy(board, level, sizeof(Board));
    Actor * actor = board->actors;
    while(actor){
        ACT_add(actor);
        actor = actor->next;
    }
    return 1;
}

void load_board_palettes(Board * board){
    u16 white[8];
    u16 slot0[8];
    u16 slot1[8];
    u16 slot2[8];
    memcpy(white, pal_src_wg.data, 8 * sizeof(u16));
    switch(board->colors[0]){
        case PAL_GR:
            memcpy(slot0, pal_src_wg.data + 8, 8 * sizeof(u16));
            break;
        case PAL_R:
            memcpy(slot0, pal_src_rb.data, 8 * sizeof(u16));
            break;
        case PAL_BL:
            memcpy(slot0, pal_src_rb.data + 8, 8 * sizeof(u16));
            break;
            /*
        case PAL_PI:
            memcpy(slot0, pal_src_py.data, 8 * sizeof(u16));
            break;
        case PAL_YL:
            memcpy(slot0, pal_src_py.data + 8, 8 * sizeof(u16));
            break;
        case PAL_BK:
            memcpy(slot0, pal_src_bl.data, 8 * sizeof(u16));
            break;
            */
    }
    switch(board->colors[1]){
        case PAL_GR:
            memcpy(slot1, pal_src_wg.data + 8, 8 * sizeof(u16));
            break;
        case PAL_R:
            memcpy(slot1, pal_src_rb.data, 8 * sizeof(u16));
            break;
        case PAL_BL:
            memcpy(slot1, pal_src_rb.data + 8, 8 * sizeof(u16));
            break;
            /*
        case PAL_PI:
            memcpy(slot1, pal_src_py.data, 8 * sizeof(u16));
            break;
        case PAL_YL:
            memcpy(slot1, pal_src_py.data + 8, 8 * sizeof(u16));
            break;
        case PAL_BK:
            memcpy(slot1, pal_src_bl.data, 8 * sizeof(u16));
            break;
            */
    }
    switch(board->colors[2]){
        case PAL_GR:
            memcpy(slot2, pal_src_wg.data + 8, 8 * sizeof(u16));
            break;
        case PAL_R:
            memcpy(slot2, pal_src_rb.data, 8 * sizeof(u16));
            break;
        case PAL_BL:
            memcpy(slot2, pal_src_rb.data + 8, 8 * sizeof(u16));
            break;
            /*
        case PAL_PI:
            memcpy(slot2, pal_src_py.data, 8 * sizeof(u16));
            break;
        case PAL_YL:
            memcpy(slot2, pal_src_py.data + 8, 8 * sizeof(u16));
            break;
        case PAL_BK:
            memcpy(slot2, pal_src_bl.data, 8 * sizeof(u16));
            break;
            */
    }

    VDP_setPaletteColors(32, white, 8);
    VDP_setPaletteColors(40, slot0, 8);
    VDP_setPaletteColors(48, slot1, 8);
    VDP_setPaletteColors(56, slot2, 8);
}

void draw_board(Board * board){
    for(u8 i = 0; i < BOARD_BUFFER; i++){
        drawBlock(IND_TO_X(i), IND_TO_Y(i), *(board->front_blocks + i));
    }
}