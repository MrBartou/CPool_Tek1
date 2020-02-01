/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** Write a function that turns the command-line given arguments
*/
#include <stdlib.h>
#include <my.h>

char *concat_params (int argc, char **argv)
{
    int i;
    int size;
    char *memoire;

    i  = 0;
    size = 0;
    while (i < argc)
    {
        size = size + my_strlen(argv[i]);
        i++;
    }
    memoire = malloc(size * sizeof(char));
        if (memoire == NULL)
        return ("Erreur");
    i = 0;
    while (i < argc)
    {
        my_strcat(memoire, argv[i]);
        if (i < argc && my_strlen(argv[i]) > 0)
            my_strcat(memoire, "\n");
        i++;
    }
    return (memoire);
}