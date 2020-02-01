/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** Write a function that concatenates two strings
*/
int my_strlen_strncat(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
    
char *my_strncat(char *dest, char *src, int nb)
{
    int i;
    int j;
    
    i = 0;
    j = my_strlen_strcat(dest);
    while (i < nb) {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}