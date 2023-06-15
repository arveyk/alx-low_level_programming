#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array
 * @nmemb: number of elements of the array
 * @size: the size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr = NULL;

	unsigned int t;
	unsigned int z;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = nmemb * size;

	ptr = malloc(nmemb * size * sizeof(char));
	if (!ptr)
		return (NULL);

	for (t = 0; t < z; t++)
	{
		((char *)ptr)[t] = 0;
	}
	return (ptr);
}
