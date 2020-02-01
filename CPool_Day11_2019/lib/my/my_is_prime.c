/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** Write a function that returns1if the number is prime and0if not
*/
int my_is_prime(int nb)
{
    int i;

    if (nb < 2) {
        return (0);
    } else if (nb == 2) {
        return (1);
    } else {
        i = 3;
    while (i * i <= nb) {
        if (nb % i == 0) {
                return (0);
        }
        i = i + 2;
    }
    }
    return (1);
}