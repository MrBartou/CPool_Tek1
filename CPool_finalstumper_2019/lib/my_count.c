/*
** EPITECH PROJECT, 2019
** CPool_finalstumper_2019
** File description:
** my_count
*/

#include "../include/my.h"

int counting_line(char *str)
{
    int i = 0;
    int line = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            line++;
        i++;
    }
    return (line);
}

int counting_column(char *str)
{
    int column = 0;

    while (str[column] != '\n')
        column++;
    return (column);
}
