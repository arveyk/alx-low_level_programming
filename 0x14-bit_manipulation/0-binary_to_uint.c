#include <stdio.h>
#include <string.h>
#include "main.h"

unsigned int expo_mult(unsigned int idx, unsigned int base);
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the number
 *
 * Return: the number or 0 if not successful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	unsigned int ch = 0;
	char *v;
	int len;
	int tr = 0;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	v = (char *)b;
	while (v && len >= 0)
	{
		ch = (v[tr] - '0');
		if (ch == 1 || ch == 0)
		{
			conv += (ch * expo_mult(2, len));
			--len;
			tr++;
		}
		else
			return (0);
	}
	return (conv);
}

/**
 * expo_mult - multiples a number by itself to a give power
 * @base: the base number
 * @idx: the exponent
 *
 * Return: The result.
 */
unsigned int expo_mult(unsigned int base, unsigned int idx)
{

	unsigned int result = 1;
	int lim = 0;

	if (idx == 0)
		return (1);
	while ((unsigned int)lim < idx)
	{
		result *= base;
		lim++;
	}
	return (result);
}
