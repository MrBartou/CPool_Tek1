/*
** EPITECH PROJECT, 2019
** my_show_param_array
** File description:
** Write a function that displays the content of an array.
*/
#include <stdlib.h>
#include <string.h>
#include <my.h>

int my_show_param_array(struct info_param *const *table)
{
    int k = 0;
    int j = 0;
    int i = 0;

    while (table[j] != '\0') {
        j = j + 1;
    }
    while (k < j) {
        while (table[k]->length[i] != '\0') {
            my_putchar(table[k]->length[i]);
            i = i + 1;
        }
        my_putchar('\n');
        i = 0;
        while (table[k]->str[i] != '\0') {
            my_putchar(table[k]->str[i]);
            i = i + 1;
        }
        my_putchar('\n');
        i = 0;
        while (table[k]->copy[i] != '\0'){
            my_putchar(table[k]->copy[i]);
            i = i + 1;
        }
        my_putchar('\n');
        i = 0;
        while (table[k]->word_array[i] != '\0') {
            my_putchar(table[k]->word_array[i]);
            i = i + 1;
        }
        my_putchar('\n');
        i = 0;
        k = k + 1;
    }
    return (0);
}
