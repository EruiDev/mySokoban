/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my header file containing all prototypes
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

void my_putchar(char c);

void usage();

int my_put_nbr(int nb);

int errors(int ac, char **str);

int my_putstr(char const *str);

int sokoban(char **buffer);

char **my_get_file_content(char *str);

int my_tab_lenght(char **tab);

char **my_tab_realloc(char **tab, char *line);

int get_first(char **str);

void mover(char **buffer, int key);

void initializer();

int get_first_p(char **str);

int get_second_p(char **str);

int right(char **buffer);

int left(char **buffer);

int up(char **buffer);

int victory(char **str);

int down(char **buffer);

int errors2(char **str);

#endif
