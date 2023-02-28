#include "main.h"
#include <ctype.h>

/**
 * infinite_add - adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will store the result
 * @size_r: size of buffer
 *
 * Return: pointer to the result or zero
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int y;

	for (y = 0; n1 && n2 && y < size_r; y++)
	{
		r[y] = (n1[y]) + (n2[y]);
		if (!r)
			return (0);
	}


	return (r);
}
