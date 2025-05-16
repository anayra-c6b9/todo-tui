#include <sys/ioctl.h>
#include <unistd.h>
#include <stdio.h>
#include "cutil.h"

void get_terminal_size(WinSize *win) {
        struct winsize w;

        // Get terminal window size
        if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) == -1) {
                perror("ioctl");
		return;
        }
	
	win->row_size = w.ws_row;
	win->col_size = w.ws_col;
}

