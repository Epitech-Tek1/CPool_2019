/*                                                                                                                                                                                             
** EPITECH PROJECT, 2019
** my_params_list
** File description:
** testing linked list
*/

#include "include/mylist.h"
#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_list_size(linked_list_t const *begin)
{   
    int i;

    if (!begin)
        return (0);
    for (i = 0; begin; i++)
        begin = begin->next;
    return (i);
}

linked_list_t *create_element(linked_list_t *list, char *av)
{
    linked_list_t *element = malloc(sizeof(linked_list_t));

    element->data = av;
    element->next = list;
    return (element);
}
