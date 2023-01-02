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

	while (*dest++ != '\0')
		n++;

	while (*src++ != '\0')
	{
		*dest = *src;
		dest++;
	}
	return (dest);
}
