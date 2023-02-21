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

	int  d;
	
	
	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	dest[d] = '\0';
	return (dest);
}
