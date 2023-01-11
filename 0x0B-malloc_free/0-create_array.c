#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char.
 *
 * Return: pinter to array created
 * @size: size of the array to be printed
 * @c: character to be initialized to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	size_t j;

	if (size == 0)
		return (NULL);


	p = malloc(size * sizeof(char));
	if (c == '\0')
		return (NULL);

	for (j = 0; j < size; j++)
	{
		p[j] = c;
	}
	return (p);
}
