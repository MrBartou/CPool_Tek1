/*
** EPITECH PROJECT, 2019
** test_my_revstr
** File description:
** Write a function for test revstr
*/
#include <criterion/criterion.h>

Test(my_revstr, testing_the_function)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 5);
    cr_assert_str_ep(dest, "olleH");
}