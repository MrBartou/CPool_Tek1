/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** Write a function that returns the square root.
*/
 int my_compute_square_root(int nb)
 {
    int a = 0;

    if (a < 0 || a == 0) {
        return (0);
    }
    while(a * a != nb) {
        a = a + 1;
    } if (a > nb) {
        return (0);
    }
}