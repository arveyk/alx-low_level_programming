#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog  - prints Poppy's info
 * @d: pointer to stuct dog.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL)
		printf("Name: (nil)\nAge : %f\nOwner: %s\n", d->age, d->owner);
	else if (d->age == 0)
	printf("Name: %s\n Age: (nil)\n %s\n", d->name, d->owner);
	else if (d->owner == NULL)
	printf("Name: %s\nAge: %f\n Owner: (nil)\n", d->name, d->age);

	else
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
