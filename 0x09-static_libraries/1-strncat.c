#include "main.h"
#include <string.h>
/**
 * *_strncat - combines two strings
 *
 * Return: combined string
 * @dest: pointer to 1st string.
 * @src: pointer to 2nd string.
 * @n: integer to be used in checking size of array
 */
char *_strncat(char *dest, char *src, int n)
{

	int  d, len = 0;

	len = strlen(dest);
	if ((int)strlen(src) >= n)
	{
		for (d = 0; d < n; d++)
		{
			dest[d + len] = src[d];
		}
	}
	else
		for (d = 0; d < n && d < (int)strlen(src); d++)
		{
			dest[d + len] = src[d];
		}
	dest[strlen(dest) + 1] = '\0';
	return (dest);
}
