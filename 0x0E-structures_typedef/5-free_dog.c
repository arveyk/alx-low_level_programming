#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees struct dog.
 * @d: pointer to struct dog
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);

}
