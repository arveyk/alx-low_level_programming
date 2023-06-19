#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
