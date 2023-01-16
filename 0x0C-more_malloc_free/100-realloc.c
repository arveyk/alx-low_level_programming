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
	char *temp;
	unsigned int i;

	temp = ptr;

	ptr = malloc(old_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		return (ptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
	ptr = malloc(new_size);
		if (!ptr)
		{
		free(ptr);
		return (NULL);
		}
	}

	else
	{
	free(ptr);
	for (i = 0; i < old_size; i++)
	temp++;
	ptr = malloc(new_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	}
	return (ptr);
}
