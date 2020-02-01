/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** Write an iterative function that returns the first argument
*/
int my_strlen_strncat(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i = i + 1;
    return (i);
}

char *my_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;

    i = 0;
    j = my_strlen_strncat(dest);
    while (i < nb)
    {
        dest[j] = src[i];
        i = i + 1;
        j = j + 1;
    }
    dest[j] = '\0';
    return (dest);
}