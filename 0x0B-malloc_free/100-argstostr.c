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
	size_t i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		len += strlen(av[count]);
	}

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);

/*	for (count = 0; count < ac; count++)
	{
		for (str_len = 0; str_len < len / (ac * 2))

		if (*av[count] == '\0')
		{
* 			str[count] = '\n';
			continue;
		}
		str[count] = *av[count];
	}
	str[len] = '\n';
*/
	for (count = 0; count < ac; count++)
	{
/*		while(av[count][i] != '\0')	*/
		while (i < strlen(av[count]))
		{
			if (av[count][i + 1] == '\0')
			{
				str[i + 1] = '\n';
			}
		str[i] = av[count][i];
		i++;
		}
	}
	str[len + 1] = '\0';
	return (str);
}
