/*
** EPITECH PROJECT, 2019
** my_params_to_list
** File description:
** Write a fonction for create a list of params
*/
#include <stdlib.h>
#include "../../include/mylist.h"

int	my_put_in_list(linked_list_t **list, char *data)
{
    linked_list_t *elem;

    elem = malloc(sizeof(*elem));
    if (elem == NULL)
        return (1);
    elem->data = data;
    elem->next = *list;
    *list = elem;
    return (0);
}

linked_list_t *my_params_in_list(int ac, char **av)
{
    int i;
    linked_list_t	*list;

    i = 0;
    list = NULL;
    while (i <= (ac - 1)) {
        my_put_in_list(&list, av[i]);
        i = i + 1;
    }
    return (list);
}