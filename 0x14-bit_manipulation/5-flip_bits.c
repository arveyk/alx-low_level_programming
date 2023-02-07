#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - counts number of bit required to
 * flip from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int count = 0;

	if (n ^ m)
		count += 1;
	else
		count += 0;

	return (count);
}
