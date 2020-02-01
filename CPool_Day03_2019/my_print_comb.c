/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** print all the nombers composed by three different digits number
*/
int my_print_comb(void)
{
    char  a;
    char  b;
    char  c;

    a = 48;
    while (a <= 55) {
        b = a + 1;
            while (b <= 56) {
                c = b + 1;
                    while (c <= 57) {
                        my_comb_printer(a, b, c);
                        c = c + 1;
                    }
                b = b + 1;
            }
        a = a + 1;
    }
}

void my_comb_printer(int a, int b, int c)
{
    if (a == 55 && b == 56 && c == 57) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
    } else {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        my_putchar(',');
        my_putchar(' ');
    }
}