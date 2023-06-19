#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the variable
 * @name: name value
 * @age: age value
 * @owner: owner value
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
