#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>                  /*  for sleep()  */
#include <curses.h>


int main(void) {
	initscr();
	move(14,15);
	printw("Hello World\n");
	refresh();
    return EXIT_SUCCESS;
}
