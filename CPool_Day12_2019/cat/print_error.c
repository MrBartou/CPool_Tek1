/*
** EPITECH PROJECT, 2019
** print_error
** File description:
** To write the error in cat
*/
#include <fcntl.h>
#include <errno.h>

int infinite (void);
void my_putchar (char);
int my_strlen (char const *str);

void print_error (char **argv, int i, int errsv)
{
    if (argv[i][0] == '-')
        infinite();
    else if (errsv == EACCES) {
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Permission refusée\n", 20);
    }
    else if (errsv == ENOENT) {
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Pas de fichier dans le dossiers\n", 28);
    }
    else if (errsv == EISDIR) {
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Impossible avec un dossier\n", 17);
    }
}