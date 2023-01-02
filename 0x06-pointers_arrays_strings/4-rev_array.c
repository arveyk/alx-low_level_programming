#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the elements of an array
 *
 * Return: no value
 * @a: pointer to array
 * @n: integer to be used in iteration
 */
void reverse_array(int *a, int n)
{

	int *ptr2, hold;

	ptr2 = a + n - 1;


	while (a < ptr2)
	{
		hold = *a;
		*a = *ptr2;
		*ptr2 = hold;
		++a;
		--ptr2;
	}
}
