/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** Write an iterative function that returns the first argument
*/
#include <stdlib.h>

char *my_strdup (char *str)
{
    int len;
    char *dup;

    len = my_strlen(str) + 1;
    dup = malloc(len);
    if (dup == NULL)
        return (NULL);
    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}
