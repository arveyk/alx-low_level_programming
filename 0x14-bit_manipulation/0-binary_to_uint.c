#include <stdio.h>
#include <math.h>
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

	char *s = (char *)b;
	unsigned int q, p = 0, dec;
	

	if (b == NULL || *b != 1 || *b != 0)
		return (0);
	for (dec = 0, q = strlen(b) - 1; q; --q, ++p)
	{
		dec = dec + (s[q] - 48) * (1 << p) ;
	}
	
	return (dec);
}
