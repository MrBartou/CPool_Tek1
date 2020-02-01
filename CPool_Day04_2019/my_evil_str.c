/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** The goal of this task is to swap each of the string’s characters.
*/
void my_putchar(char c);

int size(char *str)
{
    int j;

    j = 0;
    while (str[j] != '\0') {
        j++;
    }
    return (j);
}

char *my_evil_str(char *str)
{
    int size;

    size = size(str);
    while (i >= 0) {
        my_putchar(str[size]);
        size--;
    }
    return (0);
}