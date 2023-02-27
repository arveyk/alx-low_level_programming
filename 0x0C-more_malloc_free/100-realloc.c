#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory pointer using malloc and free.
 *
 * Return: No value
 * @ptr:  pointer to the array to be reallocated
 * @old_size: the size of the old mem block.
 * @new_size: size of new mem allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	int *m = (int *)ptr;
	int *h = NULL;
	size_t f;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	h = (int *)ptr;
	for (f = 0; f < old_size; f++)
		h[f] = m[f];

	return (ptr);
}
