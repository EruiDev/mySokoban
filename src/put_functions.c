/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** My_put_number
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    } else if (nb < 0) {
        nb = nb *-1;
        my_putchar(45);
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    return (0);
}

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}