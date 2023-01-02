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

	char p;

	n = *dest;

	while (*dest++ != '\0')
	{
		p = *(dest + 1) +  *(src + 1);
		n++;
		p++;
	}
	return (0);
}
