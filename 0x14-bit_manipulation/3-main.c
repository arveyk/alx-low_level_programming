#include <stdio.h>
#include "main.h"

/**
 * main - prints the result of using the set bit function
 *
 * Return: Always 0.
 */
{
	unsigned long int n;

	n = 1024;
	set_bit(&n, 5);
	printf("%lu\n", n);
	n = 0;
	set_bit(&n, 0);
	printf("%lu\n", n);
	return (0);
}
