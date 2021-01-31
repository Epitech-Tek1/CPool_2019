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

linked_list_t *my_params_list(int ac, char *const *av)
{
    linked_list_t *list = NULL;
    for (int i = 0; i < ac; i++) {
        linked_list_t *create_element  = malloc(sizeof(linked_list_t));

        if (!create_element)
            return (0);
        create_element->data = av[i];
        create_element->next = list;
        list = create_element;
        my_putstr(list->data);
        my_putchar('\n');
    }
    while (list != NULL) {
        list = list->next;   
    }
    return (&list);
}

int main(int ac, char **av)
{
    my_params_list(ac, av);
}
