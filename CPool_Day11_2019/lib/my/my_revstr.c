/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Write a function that reverses a string
*/
char *my_revstr(char *str)
{
    int count1 = 0;
    int count2 = 0;
    int e = 0;
    char *z = str;
    char temp;

    while (str[count1] != '\0') {
        count1 = count1 + 1;
    }
    count1 = count1 - 1;
    e = count1 / 2;
    while (count1 > e) {
        temp = z[count2];
        str[count2] = z[count1];
        str[count1] = temp;
        count2 = count2 + 1;
        count1 = count1 - 1;
    }
    return (str);
}