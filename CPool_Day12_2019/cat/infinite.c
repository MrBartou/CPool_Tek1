/*
** EPITECH PROJECT, 2019
** infinite
** File description:
** write the fonction infinite
*/
#include <fcntl.h>
#include <errno.h>

void my_putchar (char);
int my_putstr (char const *str);

int infinite (void)
{
    int ret;
    char buffer[30000];

    while (1) {
        ret = read(0, buffer, 30000);
        buffer[ret] = '\0';
    if (ret == 0)
        return (0);
        my_putstr(buffer);
    }
}