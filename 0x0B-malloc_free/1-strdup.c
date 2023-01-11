#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - allocates space for new string duplicates string to spacefrom src
 *
 * Return: pointer to new string
 * returns NULL if str = NULL
 * returns  NULL if there's insufficient memory
 * @str: source string
 */
char *_strdup(char *str)
{

	size_t size;
	char *b;

	size = strlen(str) + 1;

	if (str == NULL)
		return (NULL);

	b = malloc(size);

	if (b)
	{

		memcpy(b, str, size);
	}

	return (b);



}
