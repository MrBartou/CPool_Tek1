/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** Write a function that capitalizes the first letter of each word.
*/
char *my_strlowcase1(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 1;
    int z = 96;
    int y = 123;
    
    str = my_strlowcase1(str);
    if (str[i] >= 97 && str[i] <= 122)
        str[0] = str[0] - 32;
    while (str[i] != '\0') {
        if (str[i-1] > 31 && str[i-1] < 48 && str[i] > z && str[i] < y)
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}