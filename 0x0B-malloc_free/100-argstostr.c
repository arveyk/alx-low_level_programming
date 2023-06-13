#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		len += strlen(av[count]);
	}

	str = (char *)malloc(sizeof(char ) * len);
	if (!str)
		return (NULL);

	for (count = 1; count < ac; count++)
	{
		if (*av[count] == '\0')
		{
			str[count] = '\n';
			count++;
		}
		str[count - 1] = *av[count];
	}
	str[count] ='\n';
	return (str);
}
