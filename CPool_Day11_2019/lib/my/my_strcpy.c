/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** Write a function that copies a string into another
*/
char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    for (i; src[i]; ++i) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}