#include "main.h"

/**
 * flip_bits - counts number of bit required to flip from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int count = 0;
	char *a = &n;
	char *b = &m;
	
	while (n)
	{
	
		if ((a & b) == 1)
			count += 1;
	}
	return (count);
}
