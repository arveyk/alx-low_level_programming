#include "main.h"
#include <stdio.h>

/**
 * print_array - print the element of an array
 *
 * Return: void of return value
 * @a : pointer to element
 * @n : number of element in array
 */
void print_array(int *a, int n)
{

	for (n = 0; n <= 4; n++)
		printf("%d, ", (a[n]));
	printf("\n");
}
