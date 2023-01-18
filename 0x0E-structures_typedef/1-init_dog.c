#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the structure describing a dog
 * @name: name of mans best friend
 * @age: age of the canine
 * @owner: the friend of the canine
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
