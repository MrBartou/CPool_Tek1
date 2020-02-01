/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Reproduce the behavior of the strstr function
*/
char *my_strstr(char *str, char const *to_find)
{
    int i;
    int j;
    
    i = 0;
    while (str[i] != '\0') {
        j = 0;
        while (to_find[j] == str[i + j]) {
            if (to_find[j + 1] == '\0') {
                return (str + i);
            }
            j++;
        }
        i++;
    }
    return (0);
}