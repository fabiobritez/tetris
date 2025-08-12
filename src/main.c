#include "piece.h"
#include "board.h"


// TODO: pick gravity in milliseconds
static const int gravity_ms = 500;

// TODO: implement a clock in ms
static long now_ms(void) {
  return 0;
}



int main(void)
{
  // TODO: init all
  clear_board();
  // input_init();
  piece_t active;
  piece_spawn(&active);
  
  long last = now_ms();
  long acc = 0;
  int running = 1;


  while(running)
  {
    long t = now_ms();
    long dt = t - last; // TODO: guard if dt<0
    last = t;

    acc += dt;

    // input: left/right/down key to move.
    // 'q' key to quit
    // int key = input_poll_key();

    // TODO: switch(key) {handle movement and quit}
    
    // gravity step
    if (acc >= gravity_ms)
    {
      // TODO: try to move down;
      // if blocked -> lock piece and spawn new
      // if spawn is blocked -> game over (running = 0)
      acc = 0;
    }

    // TODO: render
    // render_begin();
    // render_draw(&active);
    // render_end();
    
    // TODO: sleep to cap frame rate (100 fps)
  }
  
  // TODO: input_shutdown();

  return 0;
}
