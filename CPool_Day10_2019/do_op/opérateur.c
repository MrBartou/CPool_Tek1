/*
** EPITECH PROJECT, 2019
** opérator
** File description:
** write a calculatrice
*/
int addition (char *nb1, char *nb2)
{
    char *resultats;

    resultats = nb1 + nb2;
    return (resultats);
}

int soustraction (char *nb1, char *nb2)
{
    char *resultats;

    resultats = nb1 - nb2;
    return (resultats);
}

int multiplication (char *nb1, char *nb2)
{
    char *resultats;

    resultats = nb1 * nb2;
    return (resultats);
}

int division (char *nb1, char *nb2)
{
    char *resultats;

    if (nb1 == 0 || nb2 == 0)
    {
        my_putstr("STOP, Division par 0 !")
    } else {
    resultats = nb1 / nb2;
    return (resultats);
    }
}

int modulo (char *nb1, char *nb2)
{
    char *resultats;

    if (nb1 == 0 || nb2 == 0)
    {
        my_putstr("STOP, Modulo par 0 !")
    } else {
    resultats = nb1 % nb2;
    return (resultats);
    }
}