/*
** EPITECH PROJECT, 2019
** my_params_to_array
** File description:
** Write a function that stores the program’s parameters.
*/
#include <stdlib.h>
#include <string.h>
#include <my.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    int k = 0;
    struct info_param **table;
    table = malloc(sizeof(struct *info_param) + 1);

    if (table == 0){
        return (0);
    }
    while (k < ac){
        table[k] = malloc(sizeof(struct info_param));
        table[k]->length = my_strlen(av[k]);
        table[k]->str = av[k];
        table[k]->copy = my_strcpy(av[k]);
        table[k]->word_array = my_str_to_word_array(av[k]);
        k = k + 1;
    }
    table[k] = 0;
    return (*table);
}