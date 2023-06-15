#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to allocated memory, 98 on failure
 */
void *malloc_checked(unsigned int b)
{

	void *space = malloc(b);

	if  (!space)
		exit(98);
	return (space);
}
