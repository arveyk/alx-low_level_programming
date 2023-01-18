#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

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
	char *ptr, *ptr2;
	
	dog_t new_dog;


/**
 * new dog -new struct dog declaration
 *
 */
	ptr = (char *)malloc(sizeof(name));
	if (!name)
		return (NULL);
	ptr2 = (char *)malloc(sizeof(owner));
	if (!ptr2)
		return (NULL);
	
	new_dog.name = ptr;
	new_dog.age = age;
	new_dog.owner = ptr2;
	return (new_dog);
}
