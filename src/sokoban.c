/*
** EPITECH PROJECT, 2019
** sokoban.c
** File description:
** This is the sokoban
*/

#include "../include/my.h"

int sokoban(char **buffer)
{
    int f = 0;
    int len = get_first(buffer) / 2;
    int stop = -1;
    int key = -1;

    initializer();
    while (stop != 0) {
        for (f = 0; buffer[f] != NULL; f++) {
            if (victory(buffer) == 0) {
                stop = 0;
                break;
            }
            mvprintw((LINES / 2 + f) - len, COLS / 2 - len, "%s", buffer[f]);
        } if (stop == -1) {
            key = getch();
            mover(buffer, key);
        }
    }
    endwin();
    return (stop);
}

int main(int ac, char **av)
{
    char **buffer = my_get_file_content(av[1]);
    int f = 0;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        usage();
        return (0);
    }
    if (buffer == NULL || errors(ac, buffer) == 1 || errors2(buffer) == 1)
        return (84);
    sokoban(buffer);
    return (0);
}
