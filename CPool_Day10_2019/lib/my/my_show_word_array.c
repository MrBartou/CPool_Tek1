/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** Write a function that displays the content of an array of words.
*/
#include <stdlib.h>

int my_show_word_array(char * const *tab)
{
    int i = 0;
    int j = 0;

    while(tab[i] != '\0') {
        j = 0;
        while(tab[i][j] != '\0') {
            my_putchar(tab[i][j]);
            j = j + 1;
        }
        my_putchar('\n');
        i = i + 1;
    }
    return(0);
}