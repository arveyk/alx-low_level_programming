#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array
 * @ nmemb: number of elements of the array
 * @size: the size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *array = NULL;
	void *ptr = NULL;

	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);

	t = 0;
	while (t < nmemb)
	{
	
		array[t] = 0;
	}
	ptr = (void *)array;
	return (ptr);
}
