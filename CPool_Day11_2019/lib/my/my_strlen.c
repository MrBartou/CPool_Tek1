/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Write a function that counts.
*/
int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}