#pragma once

#include <stdint.h>
#define W 10  // width board
#define H 20  // heigth board


/*
 * public board
 * 0 means empty
 * 0> is filled with piece number (id)
 * */
extern uint8_t board[H][W];

// clears the entire board to zeros
void clear_board(void);

// check if bounds are ok
int board_in_bounds(int row, int column);

// returns -1 if out of bounds, otherwise de cell value
int board_cell(int row, int column);
