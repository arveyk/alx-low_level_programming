#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies string
 *
 * Return: character copied
 * @dest: string to be copied from
 * @src: varible to hold string to be copied
 * @n: variable to use in iteration
 */
char *_strncpy(char *dest, char *src, int n)
{

	int e = 0;
	int d = 0, len;

	len = strlen(src);

	if (n > len)
	{
		while (src && d < len)
		{
			dest[d] = src[d];
			d++;
		}
		for (; d < n; d++)
			dest[d] = '\0';
	}
	else
	{
		for ( ; e < n && src; e++)
			dest[e] = src[e];
	}
	return (dest);
}
