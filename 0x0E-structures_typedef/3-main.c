#include <stdio.h>
#include "dog.h"

/**
 * main - tests the dog_t type
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t my_dog;

	my_dog.name = "Poppy";
	my_dog.name = 3.5;
	my_dog.name = "Bob";
	printf("My name is %s, and I am %.1f :) -Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
