/*
** EPITECH PROJECT, 2019
** middler.c
** File description:
** This is used to put everything in the middle
*/

#include "../include/my.h"

int get_first(char **str)
{
    int f = 0;

    while (str[f] != NULL) {
        f++;
    }
    return (f);
}

int get_first_p(char **str)
{
    int y;
    int x;

    for (y = 0; str[y] != NULL; y++) {
        for (x = 0; str[y][x] != '\0'; x++) {
            if (str[y][x] == 'P') {
                return (y);
            }
        }
    }
    return (0);
}

int get_second_p(char **str)
{
    int y;
    int x;

    for (y = 0; str[y] != NULL; y++) {
        for (x = 0; str[y][x] != '\0'; x++) {
            if (str[y][x] == 'P') {
                return (x);
            }
        }
    }
    return (0);
}

void initializer(void)
{
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
}