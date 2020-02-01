/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** WWrite a program that displays all the arguments received
*/
void my_putchar(char c);
    
void my_rev_params(int argc, char *argv[])
{
    while ((args -1) > 0) {
        my_putstr(argv[argc]);
        my_putchar('\n');
    }
}
    
int main(int argc, char *argv[])
{
    my_rev_params(argc, argv);
    return (0);
}