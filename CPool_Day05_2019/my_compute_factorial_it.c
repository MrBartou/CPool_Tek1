/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** Write an iterative function that returns the factorial.
*/
int my_compute_factorial_it (int nb)
{
    int results = 1;

    if (nb == 1 || nb == 0)
         return (1);
    if (nb < 0 || nb > 12)
         return (0);
    while (nb > 1) {
        results = results * nb;
        nb--;
    }
    return (results);
}
