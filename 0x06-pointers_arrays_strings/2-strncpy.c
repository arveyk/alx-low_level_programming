#include "main.h"

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

	while (*dest++ != '\0')
		n++;
	while (*src != '\0')
	{
	
		dest = src;
		++dest;
	       	++src;
	}

		return (dest);
}
