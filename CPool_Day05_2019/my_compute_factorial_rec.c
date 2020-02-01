/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** Write a recursive function that returns the factorial.
*/
int my_compute_factorial_rec(int nb)
{
    int results;

    if (nb > 12)
        return (0);
    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);
    results = nb * my_compute_factorial_rec(nb - 1);
    return (results);
}