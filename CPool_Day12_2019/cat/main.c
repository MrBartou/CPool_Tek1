/*
** EPITECH PROJECT, 2019
** main
** File description:
** main of the cat
*/
#include <fcntl.h>
#include <errno.h>

int infinite (void);
void my_putchar (char);
int my_putstr (char const *str);
void print_error (char **argv, int i, int errsv);

int main (int argc, char **argv)
{
    int	error;
    int fd;
    int ret;
    char buffer[30000];

    if (argc == 1)
        infinite();
    for (int i = 1; i < argc; i++) {
        fd = open(argv[i], O_RDONLY);
    if (fd == -1)
        error = 1;
        ret = read(fd, buffer, 30000);
        buffer[ret] = '\0';
    if (ret == -1)
        error = 1;
    if (error == 1)
        print_error(argv, i, errno);
    else
        my_putstr(buffer);
    close(fd);
    }
}