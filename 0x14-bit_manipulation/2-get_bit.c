#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - prints out value returned by get_bit function
 * @n: number to be evaluated
 * @index: point to be referenced
 *
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	bin_rep *y = (bin_rep *)malloc(sizeof(bin_rep));
	int i = 0;

	while (n != (n / 2))
	{
		y->a[i] = n % 2;
		n /= 2;
		i++;
	}
	return (y->a[index]);
}
