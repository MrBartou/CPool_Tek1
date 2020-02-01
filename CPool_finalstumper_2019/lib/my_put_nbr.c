/*
** EPITECH PROJECT, 2018
** my_put_nbr.c
** File description:
** put nbr
*/

int my_putchar(char c);

int verify(int n)
{
    if (n == 0) {
        my_putchar('0');
        return (0);
    }
}

int my_put_nbr(int nb)
{
    int a = 0;
    long int b = nb;
    int i = 1;
    int d = 1000000000;

    verify(b);
    if (nb < 0) {
        b = -1 * b;
        my_putchar('-');
    }
    for (i; i < 11; i++) {
        if ((b / d) >= 1)
            a = (b / d ) % 10+48;
        d = d / 10;
        if (a > 47 && a < 59)
            my_putchar(a);
    }
}
