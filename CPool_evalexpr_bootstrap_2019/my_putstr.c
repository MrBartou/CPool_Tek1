/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Write a function that displays, one-by-one, the characters of a string.
*/
void my_putchar(char c)
{
    write(1, &c , 1);
}
int my_putstr (char const *str)
{
    int i = 0;

    while(str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}