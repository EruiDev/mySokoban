/*
** EPITECH PROJECT, 2019
** my_get_file_content
** File description:
** my_get_file_content
*/

#include "../include/my.h"

char **my_get_file_content(char *str)
{
    FILE *fd = fopen(str, "r");
    char *line = NULL;
    char **array = NULL;
    size_t lenght = 0;
    int stop = 0;

    if (fd == NULL)
        return (NULL);
    while (stop != -1) {
        line = NULL;
        stop = getline(&line, &lenght, fd);
        array = my_tab_realloc(array, line);
    }
    return (array);
}

int my_tab_lenght(char **tab)
{
    int f = 0;

    if (tab != NULL) {
        while (tab[f] != NULL)
            f++;
    }
    return (f);
}

char **my_tab_realloc(char **tab, char *line)
{
    char **tabd = NULL;
    int len = my_tab_lenght(tab);
    int i = 0;

    tabd = malloc(sizeof(char *) * (len + 2));
    if (tabd == NULL)
        return (NULL);
    while (i < len) {
        tabd[i] = tab[i];
        i++;
    }
    tabd[i] = line;
    tabd[i + 1] = NULL;
    return (tabd);
}