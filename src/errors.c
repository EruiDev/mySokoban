/*
** EPITECH PROJECT, 2019
** errors.c
** File description:
** This is the error handling file
*/

#include "../include/my.h"

int errors(int ac, char **str)
{
    int y;
    int x;
    int count = 0;

    if (ac != 2)
        return (1);
    for (y = 0; str[y] != NULL; y++) {
        for (x = 0; str[y][x] != '\0'; x++) {
            if (str[y][x] != '#' && str[y][x] != 'X' &&
                str[y][x] != 'O' && str[y][x] != 'P' &&
                str[y][x] != ' ' && str[y][x] != '\n') {
                return (1);
            }
            if (str[y][x] == 'P')
                count++;
        }
    }
    if (count != 1)
        return (1);
    return (0);
}

int errors2(char **str)
{
    int x = 0;
    int y = 0;
    int many_x = 0;
    int many_o = 0;

    for (y = 0; str[y] != NULL; y++) {
        for (x = 0; str[y][x] != '\0'; x++) {
            if (str[y][x] == 'X')
                many_x++;
            if (str[y][x] == 'O')
                many_o++;
        }
    }
    if (many_x != many_o)
        return (1);
    return (0);
}

int victory(char **str)
{
    int y = 0;
    int x = 0;
    int a = 0;

    for (; str[y] != NULL; y++) {
        for (x = 0; str[y][x] != '\0'; x++) {
            if (str[y][x] == 'O') {
                a++;
            }
        }
    }
    return (a);
}
