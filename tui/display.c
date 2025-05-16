#include <ncurses.h>

void header() {

	mvhline(1, 3, '=', 30);
	mvprintw(2, 3, "||");
	mvprintw(2, 31, "||");	
	mvprintw(3, 3, "||");
	mvprintw(3, 10, "T O D O  L I S T");
	mvprintw(3, 31, "||");
	mvprintw(4, 3, "||");
        mvprintw(4, 31, "||");
	mvhline(5, 3, '=', 30);


}

void footer() {

}

int get_height() {
	struct winsize w;

	// Get terminal window size
	if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) == -1) {
		perror("ioctl")
	}
}

int main() {
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);

	while(1){
		clear();
		header();
		int ch = getch();

		if (ch == KEY_UP)
			break;
	}
	
	endwin();
	return 0;
}

