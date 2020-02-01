/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Write a function for print lowercase alphabet
*/
int my_print_alpha(void)
{
    int count = 97;
    
    while (count <= 122) {
        my_putchar(count);
        count ++;
    }
}