/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** Write an iterative function that returns the first argument
*/
int my_compute_power_it(int nb,int p)
{
    int resultats = 1;
    
    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    while (p >= 1) {
        resultats = resultats * nb;
        p = p - 1;
    }
    return (resultats);
}