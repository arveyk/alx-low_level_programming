#include "main.h"

/**
 * *_strncpy - copies string
 *
 * Return: character copied
 */
char *_strncpy(char *dest, char *src, int n)
{

	n = *dest;
	while (n <= '\0')
		*src = *dest;
	return (src);
}
