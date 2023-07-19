#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates string
 * @ac: argument counter
 * @av: argument
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{

	char *str_com;
	int tt_len;
	int i;
	int k = 0;
	unsigned int j = 0;
	int p = 1;

	if (ac == 1 || av == NULL)
		return (NULL);
	tt_len = 1;
	for (i = 1; i < ac; i++)
		tt_len += strlen(av[i]) + 1;

	str_com = malloc(sizeof(char) * tt_len);
	if (!str_com)
		return (NULL);
	str_com[tt_len - 1] = '\0';
	do {
		if (av[p][j] == '\0')
		{
			str_com[k] = '\n';
			p++;
			k++;
			j = 0;
		}
		else
		{
			do {
				str_com[k] = av[p][j];
				k++;
				j++;
			} while (av[p][j] != '\0');
		}
	} while (p < ac);
	return (str_com);
}
