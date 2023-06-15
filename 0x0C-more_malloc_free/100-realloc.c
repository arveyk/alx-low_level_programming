#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * old_size: size of allocated space for ptr
 * @new_size: new size of new memory block
 *
 * Return: Pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *ptr_new;
	unsigned int min;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if (new_size == old_size)
		return (NULL);
	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
		return (NULL);
	if (ptr == NULL)
		return (ptr_new);

	if (old_size > new_size)
		min = new_size;
	else
		min = old_size;

	if (ptr_new == NULL)
		return (NULL);

	for (i = 0; i < min; i++)
		((char *)ptr_new)[i] = ((char *)ptr)[i];

	free(ptr);
	return (ptr_new);

}
