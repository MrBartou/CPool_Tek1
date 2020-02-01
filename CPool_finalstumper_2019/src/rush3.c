/*
** EPITECH PROJECT, 2019
** CPool_finalstumper_2019
** File description:
** rush3
*/

#include "../include/my.h"

char *rush3(int x, int y, char *final)
{
    int i = 0;

    if (x == 1 || y == 1) {
        final = special_pattern3(x, y, final);
        return final;
    }
    i = display_first_line3(x, final, i);
    if (y > 2)
        i = display_middle_lines3(x, y, final, i);
    if (y > 1)
        i = display_first_line2_3(x, final, i);
    return final;
}

int display_first_line3(int x, char *final, int i)
{
    for (int b = 0; b < x; b++) {
        if (b == 0 || b == (x - 1))
            final[i] = 'A';
        else
            final[i] = 'B';
        i++;
    }
    final[i] = '\n';
    i++;
    return i;
}

int display_first_line2_3(int x, char *final, int i)
{
    for (int b = 0; b < x; b++) {
        if (b == 0 || b == (x - 1))
            final[i] = 'C';
        else
            final[i] = 'B';
        i++;
    }
    final[i] = '\n';
    i++;
    return i;
}

int display_middle_lines3(int x, int y, char *final, int i)
{
    for (int a = 0; a < (y - 2); a++) {
        for (int b = 0; b < x; b++) {
            if (b == 0 || b == (x - 1))
                final[i] = 'B';
            else
                final[i] = ' ';
            i++;
        }
    final[i] = '\n';
    i++;
    }
    return i;
}

char *special_pattern3(int x, int y, char *final)
{
    int k = 0;

    if (x == 1) {
        for (int i = 0; i < y; i++) {
            final[k] = 'B';
            final[k + 1] = '\n';
            k = k + 2;
        }
        return final;
    }
    else {
        for (int j = 0; j < x; j++) {
            final[k] = 'B';
            k++;
        }
        final[k + 1] = '\n';
        return final;
    }
}
