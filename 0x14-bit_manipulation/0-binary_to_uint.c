#include <stdio.h>
#include "main.h"
#include <stddef.h>
#include <string.h>

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
	size_t len = strlen(b);
	size_t n = len;
	unsigned int p = 1;
	unsigned int i;

	while (*z)
	{
		if (z == NULL || *z != 0 || *z != 1)
			return (0);
		for (i = 0; i < len; i++)
		{
			if(b[i] == 1)
			{
			while (n)
			{
			p = p * 2;
			n -= 1;
			}
			q += p;
			}
			if (b[i] == 0)
				p += 0;
		}
	}
	return (q);
}
