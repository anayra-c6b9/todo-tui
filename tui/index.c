#include <stdlib.h>
#include <signal.h>
#include "cutil.h"

WinSize globalWin;

// function that updates window size
void handle_window_resize(int sig) {
	get_terminal_size(&globalWin);
}

// looping the ui
void ui_loop() {

	// initial size fetch
	get_terminal_size(&globalWin);

	signal(SIGWINCH, handle_window_resize);
	
	
}
