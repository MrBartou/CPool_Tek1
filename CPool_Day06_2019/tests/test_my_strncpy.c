/*
** EPITECH PROJECT, 2019
** test_my_strncpy
** File description:
** Write a function for test strncpy
*/
#include <criterion/criterion.h>

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_ep(dest, "Hello");
}