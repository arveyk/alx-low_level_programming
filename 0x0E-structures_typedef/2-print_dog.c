#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the elements of struct dog
 * @d: pointer to the struct dog
 *
 * Return: None
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);

	if (d->age <= 0)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Age: %s\n", d->owner);
}
