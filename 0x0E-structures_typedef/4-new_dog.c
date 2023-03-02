#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to struct dog.
 * @age: pointer to struct element age
 * @owner: pointer to struct element owner
 *
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	
	dog_t *ptr = NULL, n_dog;

	ptr = &n_dog;

	n_dog.name = name;
	n_dog.owner = owner;

	n_dog.age = age;

	return (ptr);

}
