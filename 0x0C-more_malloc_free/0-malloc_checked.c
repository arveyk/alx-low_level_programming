#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: used in determing the amount of space to be allocated
 *
 *
 * Return: no value
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(void *) * b);

	if (!ptr)
		exit(98);

	return (ptr);
}
