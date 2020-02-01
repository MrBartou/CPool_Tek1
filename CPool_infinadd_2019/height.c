/*
** EPITECH PROJECT, 2019
** infin_add
** File description:
** search the lenght of char
*/
#include "include/my.h"

char *height(char **av)
{
    int char1 = my_strlen(av[1]);
    int char2 = my_strlen(av[2]);
    char *av1 = malloc(sizeof(char) * char2);
    my_strcpy(av1, av[1]);

    if (char1 < char2) {
        for(char1; char1 != char2; char1++){
            av1[char1] = 48;
        }
    av1[char1] = '\0';
    }
    return(av1);
}

char *height2(char **av)
{
    int char1 = my_strlen(av[1]);
    int char2 = my_strlen(av[2]);
    char *av2 = malloc(sizeof(char) * char2);
    my_strcpy(av2, av[2]);

    if (char1 > char2) {
        for(char2; char2 != char1; char2++){
            av2[char2] = 48;
        }
    av2[char2] = '\0';
    }
    return(av2);
}