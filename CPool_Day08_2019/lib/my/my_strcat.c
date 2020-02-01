/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** Write an iterative function that returns the first argument
*/
int my_strlen_strcat (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_strcat (char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = my_strlen_strcat(dest);
    while (src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}