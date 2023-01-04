#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calculates the sum of numbers in diagonal
 *
 * Return: void
 * @a: pointer to array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int k;
	int u;
	long int sum1 = 0;
	long int sum2 = 0;

	for (k = 0; k <= size; k++)
	{
		for (u = 0; u <= size; u++)
		{
			if (k == u)
			sum1 += a[k * size + u];
		}
	}
	for (k = 0; k <= size; k++)
	{
		for (u = 0; u <= size; u++)
		{
			if ((k + u) == (size - 1))
			sum2 += a[k * size + u];
		}
	}
	printf("%li, %li\n", sum1, sum2);


}
