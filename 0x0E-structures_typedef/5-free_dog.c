#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees a dog structure created using malloc
 * @d: pointer to the dog to be freed
 *
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
	d = NULL;
}
