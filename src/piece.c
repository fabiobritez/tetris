#include "piece.h"
#include "board.h"



/* 
 * mask for I piece
 * 1 means block
 * 0 means empty
 */

static uint8_t I_shape[4][4] ={
  {0, 0, 0, 0},
  {1, 1, 1, 1},
  {0, 0, 0, 0},
  {0, 0, 0, 0}
};


/*
 * this will return shape of different types and rotation*/
static int shape_at(int row, int column)
{
  return I_shape[row][column];
}


void piece_spawn(piece_t *p)
{
  // TODO: set type, rot, row and column near (above -2, center 3)
}

static int can_place_at(const piece_t *p, int row, int column)
{
  // TODO: iterate over the 4x4 local grid; for each occupied cell
  // calculate board coords: br = row + r, bc = col + c}
  // check horizonal bounds (0 .. W-1) and vertical bottom (br<H)
  // allow br < 0 during spawn (skip occupancy test)
  // else ensure board[br][bc]==0
  return 0;
}

int piece_can_place(const piece_t *p)
{
  // TODO: delegate to can_place_at  with the piece's own row column
  return 0;
}

void piece_move_down(piece_t* piece)
{
    // TODO: if can_place_at(piece, p->row+1, piece->col)
    // then increment row
}


void piece_move_rigth(piece_t* piece)
{
    // TODO: if can_place_at(piece, p->row, p->column+1 )
}

void piece_move_left(piece_t* piece)
{

}

void piece_lock(const piece_t *p)
{

}
