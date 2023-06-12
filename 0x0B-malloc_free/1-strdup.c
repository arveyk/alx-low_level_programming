#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - allocate memory block, copies string to it
 * @str: string to be copied
 *
 * Return: pointer to the new string;
 */
char *_strdup(char *str)
{

	char *copy_str;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	i = strlen(str);
	copy_str = (char *)malloc((sizeof(char) * i) + 1);

	if (!copy_str)
		return (NULL);
	strcpy(copy_str, str);

	return (copy_str);
}
