#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments to it
 * @ac: argument counter
 * @av: argument vector
 * 
 * Return pointer to new string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int count;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = (char *)malloc(sizeof(char) * ac)

	for (count = 0; count < ac; count++)
	{
		if (*av[count] == '\0')
		{
			str[count] = '\n';
			count++;
		}
		str[count] = *av[count];
	}
	return
}
