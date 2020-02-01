/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Count number of characters of a string
*/

void my_putchar(char);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}