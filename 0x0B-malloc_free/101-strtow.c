#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * strtow - splits a sting into words
 * @str: string to be split
 *
 * Return: pointer to array of strings, NULL if str == NULL or "", or failure
 * occurs
 */

char **strtow(char *str)
{
	char **st_tow;
	char empty[] = "";
	char space[] = " ";
	int len;
	int i, j;

	if (str == NULL || str == empty)
		return (NULL);
	len = strlen(str) + 1;

	st_tow = malloc(sizeof(int *) * len);
	if (!st_tow)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		st_tow[i] = malloc(sizeof(char) * (len / 3));
	}

	for (i = 0; i < len; ++i)
	{
		for (j = 0; j < (len / 3); ++j)
		{

			if ((str[i]) == space[0])
				continue;
			st_tow[i][j] = str[j];
		}
	}
	st_tow[len] = NULL;

	return (st_tow);
}
