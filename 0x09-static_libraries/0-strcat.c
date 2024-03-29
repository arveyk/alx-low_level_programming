#include "main.h"
#include <string.h>
/**
 * *_strcat - combines two strings
 *
 * Return: combined string
 * @dest: pointer to 1st string.
 * @src: pointer to 2nd string.
 */
char *_strcat(char *dest, char *src)
{
	int a, z;

	a = strlen(dest);

	for (z = 0; src && z < (int)strlen(src); z++)
		dest[a + z] = src[z];
	dest[a + z] = '\0';

	return (dest);
}
