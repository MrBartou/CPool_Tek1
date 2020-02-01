/*
** EPITECH PROJECT, 2018
** MY_H_
** File description:
** MY_H_
*/

#ifndef MY_H_

#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#define BUFF_SIZE (5000)

int my_putchar(char c);
int my_strcmp(char *s1, char *s2);
int my_strlen(char *str);
void my_put_nbr(int nb);
int find_rush(char *str, int res, int l, int c);
int counting_line(char *str);
int counting_column(char *str);
int try_rushes(char *str, int res);
int check_tab(int tab[], int res, int l, int c);
void display_with_tab(int tab[], int count_pipe, int l, int c);

char *rush1(int x, int y, char *final);
int display_middle_lines1(int x, int y, char *final, int i);
int display_first_line1(int x, char *final, int i);

char *rush2(int x, int y, char *final);
char *special_pattern2(int x, int y, char *final);
int display_border_line2_2(int x, char *final, int i);
int display_border_line1_2(int x, char *final, int i);
int display_middle_lines2(int x, int y, char *final, int i);

char *rush3(int x, int y, char *final);
int display_middle_lines3(int x, int y, char *final, int i);
int display_first_line3(int x, char *final, int i);
int display_first_line2_3(int x, char *final, int i);
char *special_pattern3(int x, int y, char *final);

char *rush4(int x, int y, char *final);
char *special_pattern4(int x, int y, char *final);
int display_border_line4(int x, char *final, int i);
int display_middle_lines4(int x, int y, char *final, int i);

char *rush5(int x, int y, char *final);
char *special_pattern5(int x, int y, char *final);
int display_border_line2_5(int x, char *final, int i);
int display_border_line1_5(int x, char *final, int i);
int display_middle_lines5(int x, int y, char *final, int i);

#endif
