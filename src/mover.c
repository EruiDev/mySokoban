/*
** EPITECH PROJECT, 2019
** mover.c
** File description:
** This function is used to move the player
*/

#include "../include/my.h"

void mover(char **buffer, int key)
{
    switch (key) {
    case KEY_UP:
        up(buffer);
        break;
    case KEY_DOWN:
        down(buffer);
        break;
    case KEY_LEFT:
        left(buffer);
        break;
    case KEY_RIGHT:
        right(buffer);
        break;
    }
}

int up(char **buffer)
{
    int f = get_first_p(buffer);
    int s = get_second_p(buffer);

    if ((buffer[f - 1][s] == '#') || (buffer[f - 2][s] == '#'
        && buffer[f - 1][s] == 'X')) {
        return (0);
    }
    if (buffer[f - 1][s] == 'X') {
        if (buffer[f - 2][s] == 'X')
            return (0);
        buffer[f - 2][s] = 'X';
    }
    buffer[f][s] = ' ';
    buffer[f - 1][s] = 'P';
}

int down(char **buffer)
{
    int f = get_first_p(buffer);
    int s = get_second_p(buffer);

    if ((buffer[f + 1][s] == '#') || (buffer[f + 2][s] == '#'
        && buffer[f + 1][s] == 'X')) {
        return (0);
    }
    if (buffer[f + 1][s] == 'X') {
        if (buffer[f + 2][s] == 'X')
            return (0);
        buffer[f + 2][s] = 'X';
    }
    buffer[f][s] = ' ';
    buffer[f + 1][s] = 'P';
}

int left(char **buffer)
{
    int f = get_first_p(buffer);
    int s = get_second_p(buffer);

    if ((buffer[f][s - 1] == '#') || (buffer[f][s - 2] == '#'
        && buffer[f][s - 1] == 'X')) {
        return (0);
    }
    if (buffer[f][s - 1] == 'X') {
        if (buffer[f][s - 2] == 'X')
            return (0);
        buffer[f][s - 2] = 'X';
    }
    buffer[f][s] = ' ';
    buffer[f][s - 1] = 'P';
}

int right(char **buffer)
{
    int f = get_first_p(buffer);
    int s = get_second_p(buffer);

    if ((buffer[f][s + 1] == '#') || (buffer[f][s + 2] == '#'
        && buffer[f][s + 1] == 'X')) {
        return (0);
    }
    if (buffer[f][s + 1] == 'X') {
        if (buffer[f][s + 2] == 'X')
            return (0);
        buffer[f][s + 2] = 'X';
    }
    buffer[f][s] = ' ';
    buffer[f][s + 1] = 'P';
}
