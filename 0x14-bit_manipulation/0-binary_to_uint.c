#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to decimal
 * @b : number to be converted
 *
 * Return: converted number
 * or 0 if
 * ===there is one or more chars in b not 0 or 1;
 * ====b is null;
 */
unsigned int binary_to_uint(const char *b)
{

	char *z = (char *)b;
	unsigned int q = 0;

	while (*z)
	{
		if (z == NULL || *z != 0 || *z != 1)
			return (0);
		q = (unsigned int)*z;
	}
	return (q);
}
