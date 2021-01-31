/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** reverse argument
*/

#include "../include/libmy.h"

int my_rev_params(int argc, char **argv)
{
    for (int i = argc -1; i > 0; i--) {
        my_str(argv[i]);
        my_str("\n");
    }
}

int main(int argc, char **argv)
{
    my_rev_params(argc, argv);
}
