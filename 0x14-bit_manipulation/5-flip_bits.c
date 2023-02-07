#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - counts number of bit required to flip from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int count = 0;
	bin_rep *h = (bin_rep *)malloc(sizeof(bin_rep));
	bin_rep *b = (bin_rep *)malloc(sizeof(bin_rep));
	int i = 0;

	if (!h || !b)
		return (-1);
	
	while (n && m)
	{
		h->a[i] = n % 2;
		n /= 2;
		b->a[i] = m % 2;
		m /= 2;

		if (h->a[i] == b->a[i])
			count += 1;
		i++;
	}
	free(h);
	free(b);
	return (count);
}
