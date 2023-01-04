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

	int y = 0;

	while (y++ < n)
	{
		dest
	if (dest[y] == '\0')
		dest[y] = src[y];
	}
	return (dest);
}
