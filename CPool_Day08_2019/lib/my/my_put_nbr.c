/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Write a function for print the number given as a parameter.
*/
int my_put_nbr (int nb)
{
    int nbr2;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        nbr2 = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(nbr2 + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}