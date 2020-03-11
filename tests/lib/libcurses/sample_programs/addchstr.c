#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>                  /*  for sleep()  */
#include <curses.h>


int main(void) {
	initscr();
	move(2,2);
	addstr("teest");
	refresh();
	move(2,4);
	delch();
	refresh();
    return EXIT_SUCCESS;
}
