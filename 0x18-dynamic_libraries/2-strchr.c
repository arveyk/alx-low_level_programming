#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate the character c in string s.
 *
 * Return: pointer to the first occurence of
 * @s: string to be searched
 * @c: character to be found.
 */
char *_strchr(char *s, char c)
{

	int g = 0;

	while (*(s + g))
	{
		if (*(s + g) == c)
			return (s + g);
		g++;
	}
		if (*(s + g) == c)
			return (s + g);
	return (NULL);
}
