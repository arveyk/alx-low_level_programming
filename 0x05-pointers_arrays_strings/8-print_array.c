#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - print the element of an array
 *
 * Return: void of return value
 * @a : pointer to element
 * @n : number of element in array
 */
void print_array(int *a, int n)
{

	int r = sizeof(*a);

	for (n = 0; n <= r; n++)
	{
		printf("%d", (a[n]));
		if (n < r)
			printf(", ");
	}
	printf("\n");
}
