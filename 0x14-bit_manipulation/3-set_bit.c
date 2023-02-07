#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: number to be evaluated
 * @index: point to be referenced
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int fin = 0;

	*n = *n << (index - 1);
	return (fin = *n);
}
