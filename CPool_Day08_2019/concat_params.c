/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** turn command line into string
*/

#include <stdlib.h>
#include "include/my.h"

char *concat_params(int argc, char **argv)
{
	int i = 0;
	char *str;
	int string = 0;

	for (int j = 0; j < argc; j++) {
		nbr =+ my_strlen(argv[i]);
	}
	i++;
	str = malloc(sizeof(char) + i);
	for (int k = 0; k < argc; k++) {
		for (int j = 0; argv[k][j] != '\0'; j++, string++) {
			str[string] = argv[k][j];
		}
		str[string] = '\n';
		string++;
	}
	str[string] = '\0';
	return (string);
	free(str);
}
