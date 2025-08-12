#pragma once
#include <stdint.h>

// piece types
typedef enum {PIECE_I = 0} piece_kind_t;


// represents the state of each piece
typedef struct {
  piece_kind_t type;
  uint8_t rot; // 0 in mvp0 (no rotation yet)
  int row, column; // top-left of local matrix in board coordinates.
} piece_t;


// create a new active piece (above the visible board)
void piece_spawn(piece_t* piece);

/* 
 * check if the piece at its current coordinates (row, col)
 * can be placed. no out of bounds and no overlap
 */
int piece_can_place(const piece_t* piece);


/*
 * attempt to move piece in the desired direction; 
 * do nothing if blocked
 */
void piece_move_down(piece_t* piece); 
void piece_move_right(piece_t* piece); 
void piece_move_left(piece_t* piece);

// copy current piece blocks into the board
void piece_lock(const piece_t *piece);

  
