#include "input.h"

/*
 * for this implementation we choose implement with ncurses
 */

void init_input(void)
{
  // TODO: initscr, cbreak, noecho, keypad (stdscrm TRUE),
  // nodelay, curs_set(0)
}

int input_poll_key()
{
  // TODO: getch(): return key code or -1
  return -1;
}

void input_shutdown(void)
{
  // TODO
}
