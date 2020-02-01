/*
** EPITECH PROJECT, 2019
** CPool_finalstumper_2019
** File description:
** rush1
*/

#include "../include/my.h"

char *rush1(int x, int y, char *final)
{
    int i = 0;

    i = display_first_line1(x, final, i);
    if (y > 2)
        i = display_middle_lines1(x, y, final, i);
    if (y > 1)
        i = display_first_line1(x, final, i);
    return final;
}

int display_first_line1(int x, char *final, int i)
{
    for (int b = 0; b < x; b++) {
        if (b == 0 || b == (x-1))
            final[i] = 'o';
        else
            final[i] = '-';
        i++;
    }
    final[i] = '\n';
    i++;
    return i;
}

int display_middle_lines1(int x, int y, char *final, int i)
{
    for (int a = 0; a < (y - 2); a++) {
        for (int b = 0; b < x; b++) {
            if (b == 0 || b == (x  - 1))
                final[i] = '|';
            else
                final[i] = ' ';
        i++;
        }
    final[i] = '\n';
    i++;
    }
    return i;
}

