#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments to it.
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: pointer to new string, NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int count;
	int len = 0;
	size_t j;
	ssize_t var3;

	if (av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		len += strlen(av[count]);
	}
	len++;

	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	var3 = 0;
	j = 0;
	count = 0;
	while (count < ac)
	{
		while (var3 < len && j < strlen(av[count]))
		{
			str[var3] = av[count][j];
			var3++;
			j++;
		}
		if (av[count][j] == '\0')
			j = 0;
		count++;
	}
	str[var3] = '\n';
	str[var3 + 1] = '\0';

	return (str);
}
