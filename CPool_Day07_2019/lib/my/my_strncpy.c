/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Write a function that copies a string into another.
*/
char *my_strncpy(char *dest ,char const *src,int n)
{
    int i;

    i = 0;
    for (i; i < n; ++i) {
        dest[i] = src[i];
    }
    return(dest);
}