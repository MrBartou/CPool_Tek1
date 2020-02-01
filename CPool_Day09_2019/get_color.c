/*
** EPITECH PROJECT, 2019
** get_color
** File description:
** Write a function to change the color.
*/
int get_color(char red, char green, char blue)
{
  return (((255 & 0xFF) << 24) | ((red & 0xFF) << 16) |
  ((green & 0xFF) << 8) | ((blue & 0xFF) << 0));
}