/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** Write function for print N if the number is negatif or P if it positive
*/
int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
return (0);
}
