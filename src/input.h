#pragma once


/*
 * initialize input system
 * enable non-blocking keyboard 
 */
void init_input(void);


/*
 * poll for a key press since last call
 * return -1 if none
 */
int input_poll_key(void);

/*
 * shutdown input system
 * and restore terminal
 */
void input_shutdown(void);


