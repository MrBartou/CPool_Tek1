/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Display one by one the character of a string
*/

void my_putchar(char);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}