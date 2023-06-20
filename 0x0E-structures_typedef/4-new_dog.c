#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog type variable
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = strdup(name);
	if (!new->name)
	{
		free(new);
		new = NULL;
		return (NULL);
	}
	new->owner = strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		new = NULL;
		return (NULL);
	}
	new->age = age;
	return (new);
}
