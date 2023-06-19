#include "dog.h"
#include <stdlib.h>

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
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
