#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>                  /*  for sleep()  */
#include <curses.h>


int main(void) {

    WINDOW * mainwin;
    
    /*  Initialize ncurses  */
    mainwin = initscr();

    mvaddch(13, 33, '\001t');
    mvaddch(13, 34, '\001f');
    move(14,0);
    refresh();
    sleep(1);

    delwin(mainwin);
    endwin();
    refresh();

    return EXIT_SUCCESS;
}