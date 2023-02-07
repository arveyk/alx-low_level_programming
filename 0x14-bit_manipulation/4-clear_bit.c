#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: number  to be evaluted
 * @index: the point/ index to be used
 *
 * Return: 1 if it works, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	bin_rep *jk = (bin_rep *)malloc(sizeof(jk));
	int i = 0;

	while (*n)
	{

		jk->a[i] = *n % 2;
		*n /= 2;
		i++;
	}
	jk->a[index] = 0;

	if (jk)
		return (1);
	free(jk);
	jk = NULL;
	return (-1);
}
