/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}