/*
** EPITECH PROJECT, 2019
** do_op
** File description:
** write a calculatrice
*/
void my_putchar(char c)
{
    write(1, &c, 1);
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

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1) {
        if (s1[i] > s2[i])
            return (1);
        else if (s1[i] < s2[i])
            return (-1);
        if (s1[i] == '\0')
            return (0);
        i++;
    }
}

int calcu(int argc, char **argv)
{
        if (my_strcmp(argv[2], "+" ) == 0) {
            //addition(argv[1], argv[3]);
            my_putstr("ok");
        } 
        if (argv[2] == "-") {
            //soustraction(argv[1], argv[3]);
            return (2);
        }
        if (argv[2] == "*") {
            //multiplication(argv[1], argv[3]);
            return (3);
        }
        if (argv[2] == "/") {
            //division(argv[1], argv[3]);
            return (4);
        }
        if (argv[2] == "%") {
            //modulo(argv[1], argv[3]);
            return (5);
        } else {
            return (0);
        }
    }

int main(int argc, char **argv)
{
    calcu(argc, argv);
}