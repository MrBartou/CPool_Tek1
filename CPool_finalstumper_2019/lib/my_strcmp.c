/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_revstr
*/

#include "../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    return 1;
}