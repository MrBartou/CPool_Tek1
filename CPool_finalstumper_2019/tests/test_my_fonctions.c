/*
** EPITECH PROJECT, 2019
** test_my_strstr.c
** File description:
** Get number
*/

#include <criterion/criterion.h>
#include "../include/my.h"
#include "../src/rush1.c"
#include "../src/rush2.c"
#include "../src/rush3.c"
#include "../src/rush4.c"
#include "../src/rush5.c"
#include "../lib/my_count.c"

Test(rush1, test_with_a_good_string)
{
    char *str = malloc(sizeof(char) * 6);
    
    cr_assert_str_eq(rush2(5, 1, str), "*****");
    cr_assert_str_eq(rush3(5, 1, str), "BBBBB");
}

Test(rush1, test_with_a_good_string_2)
{
    char *str = malloc(sizeof(char) * 12);
    
    cr_assert_str_eq(rush1(1, 5, str), "o\n|\n|\n|\no\n");
    cr_assert_str_eq(rush2(1, 5, str), "*\n*\n*\n*\n*\n");
    cr_assert_str_eq(rush1(3, 3, str), "o-o\n| |\no-o\n");
    cr_assert_str_eq(rush2(3, 3, str), "/*\\\n* *\n\\*/\n");
}

Test(rush3, test_with_a_good_striing_1)
{
    char *str = malloc(sizeof(char) * 6);
    
    cr_assert_str_eq(rush3(1, 5, str), rush4(1, 5, str));
    cr_assert_str_eq(rush5(1, 5, str), rush3(1, 5, str));
    cr_assert_str_eq(rush3(5, 1, str), rush4(5, 1, str));
    cr_assert_str_eq(rush3(5, 1, str), rush5(5, 1, str));
}

Test(rush3, test_with_a_good_string_3)
{
    char *str = malloc(sizeof(char) * 12);
    cr_assert_str_eq(rush3(3, 3, str), "ABA\nB B\nCBC\n");
    cr_assert_str_eq(rush4(3, 3, str), "ABC\nB B\nABC\n");
    cr_assert_str_eq(rush5(3, 3, str), "ABC\nB B\nCBA\n");
}

Test(counting_line, test)
{
    cr_assert_eq(counting_line("B\nB\nB\n"), 3);
    cr_assert_eq(counting_line("ABA"), 0);
    cr_assert_eq(counting_column("ABA\n"), 3);
    cr_assert_eq(counting_column("ABALA\n"), 5);
}
