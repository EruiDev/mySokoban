/*
** EPITECH PROJECT, 2019
** usage.c
** File description:
** The usage file for the sokoban
*/

#include "../include/my.h"

void usage(void)
{
    my_putstr("USAGE\n\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n\tmap  file representing the warehouse");
    my_putstr(" map, containing ‘#’ for walls, \n");
    my_putstr("\t     ‘P’ for the player, ‘X’ for ");
    my_putstr("boxes and ‘O’ for storage locations.\n");
}