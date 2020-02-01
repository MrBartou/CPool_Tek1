/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** create a infinite addition
*/
#include"include/my.h"

int addition(char **av)
{
    int i =  0;
    int j =  i;
    char *av1;
    char *av2;
    char *result = malloc((my_strlen(av[1]) + 2) * sizeof(char));
    av[1] = my_revstr(av[1]);
    av[2] = my_revstr(av[2]);
    av1 = height(av);
    av2 = height2(av);
    int retenue;

    for (i; i != my_strlen(av1); i++) {
        result[i] = ((av1[i] + av2[i]) - 96) + retenue;
        retenue = deduction(result, i);
        result[i] = result[i] + 48;
    }
    if (retenue == 1)
        result[i] = 49;
    my_revstr(result);
    my_putstr(result);
    my_putstr("\n");
}