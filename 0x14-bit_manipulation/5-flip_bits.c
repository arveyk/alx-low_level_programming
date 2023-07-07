#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip to get
 * to another
 * @n: first number
 * @m: second number
 *
 * Return: number of flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int bits_t;
	unsigned int count = 0;
	int i = 0;

	bits_t = n ^ m;
	while (i < 64)
	{
		if ((bits_t >> i) & 1)
			count++;
		i++;
	}
	return (count);
}
