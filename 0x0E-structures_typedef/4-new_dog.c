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
	char *ptr, *ptr2;
	unsigned long x;
	dog_t n_dog;
	dog_t *gg;

	gg = &n_dog;


	ptr = (char *)malloc(sizeof(char) * strlen(name));
	if (!ptr)
		free(ptr);

	for (x = 0; x < strlen(name); x++)
		ptr[x] = name[x];
	if (!ptr)
	{
		return (NULL);
	}

	ptr2 = (char *)malloc(sizeof(char) * strlen(owner));
	if (!ptr2)
		free(ptr2);
	for (x = 0; x < strlen(owner); x++)
		ptr2[x] = owner[x];

	if (!ptr2)
	{
		return (NULL);
	}

	n_dog.age = age;
	n_dog.name = ptr;
	n_dog.owner = ptr2;

	return (gg);
	return (0);

}
