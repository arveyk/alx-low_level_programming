#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates an array of chars
 * @size: of the array
 * @c: the character to initialize each element of the array
 *
 * Return: NULL if size = 0 of malloc fails
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *array = NULL;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (!array)
		return (NULL);
	while (i < size)
	{

		array[i] = c;
		i++;
	}
	return (array);

}
