/*
** EPITECH PROJECT, 2019
** CPool_finalstumper_2019
** File description:
** main
*/

#include "../include/my.h"

void display_with_tab(int tab[], int count_pipe, int l, int c)
{
    for (int j = 0; j < 5; j++) {
        if (tab[j] == 1) {
            write(1, "[rush1-", 7);
            my_put_nbr(j + 1);
            write(1, "] ", 2);
            my_put_nbr(l);
            my_putchar(' ');
            my_put_nbr(c);
        }
        if (count_pipe > 0 && tab[j] == 1) {
            write(1, " || ", 4);
            count_pipe--;
        }
    }
    my_putchar('\n');
    return;
}

int check_tab(int tab[], int res, int l, int c)
{
    int is_null = 1;
    int count_pipe = 0;

    for (int i = 0; i < 5; i++) {
        if (tab[i] == 1) {
            is_null = 0;
            count_pipe++;
        }
    }
    if (is_null == 1) {
        write(2, "none\n", 5);
        return 84;
    }
    count_pipe--;
    display_with_tab(tab, count_pipe, l, c);
    return res;

}

int find_rush(char *str, int res, int l, int c)
{
    char *final = malloc(sizeof(char) * (l - 1) * c);
    int tab[5] = {0, 0, 0, 0, 0};

    final = rush1(l, c, final);
    if (my_strcmp(final, str) == 1)
        tab[0] = 1;
    final = rush2(l, c, final);
    if (my_strcmp(final, str) == 1)
        tab[1] = 1;
    final = rush3(l, c, final);
    if (my_strcmp(final, str) == 1)
        tab[2] = 1;
    final = rush4(l, c, final);
    if (my_strcmp(final, str)  == 1)
        tab[3] = 1;
    final = rush5(l, c, final);
    if (my_strcmp(final, str) == 1)
        tab[4] = 1;
    free(final);
    res = check_tab(tab, res, l, c);
    return res;
}

int try_rushes(char *str, int res)
{
    int line = counting_line(str);
    int column = counting_column(str);

    if (line <= 0 || column <= 0) {
        write(2, "none\n", 5);
        return 84;
    }
    res = find_rush(str, res, column, line);
    return res;
}

int main(int ac, char **av)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;
    int res = 0;

    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
        offset = offset+len;
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    res = try_rushes(buff, res);
    return res;
}
