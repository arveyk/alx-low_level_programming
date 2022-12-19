#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string including the null character
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	unsigned long int z;

	for (z = 0; z <= (sizeof(*src)); z++)
		*dest = *src;

	return (dest);
}
