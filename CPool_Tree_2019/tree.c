/*
** EPITECH PROJECT, 2019
** tree
** File description:
** write a tree in c with arguments for the size.
*/
void tree(int size)
{
    int line1 = 0;
    int i = 0;
    int decal = 0;
    int line2 = 0;

    line1 = recup_line(size) / 2;
    for (i;i < size;i++) {
        line2 = branche(line1, 4 + i, decal, line2 - decal);
        if ((i+4) % 2) {

        } else
            decal = decal + 2;
    }
    tronc(size, line1);
}

int branche(int spc, int floor, int iii, int line)
{
    int i = 0;
    int nb_line = 0;
    int decal = 0;

    if (line == 0)
        nb_line++;
    for (i;i < floor;i++) {
        decal = (line/2)+i;
        affiche(spc - decal, '*', nb_line+line, 1);
        nb_line = nb_line + 2;
    }
    nb_line = nb_line-2;
    return (nb_line+line);
}

void affiche(int spc, char e, int nbr, int new)
{
    int i = 0;

    for (i;i < spc;i++) {
        my_putchar(' ');
    }
    i = 0;
    for (i;i < nbr;i++) {
        my_putchar(e);
    }
    if (new == 1)
        my_putchar('\n');
}
 
void tronc(int size, int line1)
{
    int i = 0;
    int nb = 0;
    int diviseur = 0;

    diviseur = size / 2;
    if (size % 2)
        nb = size;
    else
        nb = size + 1;
    for (i; i < size;i++) {
        if (size == i)
            affiche(line1-diviseur, '|', nb, 0);
        else
            affiche(line1-diviseur, '|', nb, 1);
    }
}

int recup_line(int size)
{
    int i = 2;
    int saut = 6;
    int nb_ast = 7;

    for (i; i <= size;i++) {
        if (i % 2) {
            saut = saut + 2;
        }
        nb_ast = saut + nb_ast;
    }
    return (nb_ast);
}