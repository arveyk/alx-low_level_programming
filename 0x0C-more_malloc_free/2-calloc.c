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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (t = 0; t < nmemb; t++)
	{
		((int *)ptr)[t] = 0;
	}
	return (ptr);
}
