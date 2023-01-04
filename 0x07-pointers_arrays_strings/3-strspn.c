#include "main.h"
#include <string.h>

/**
 * _strspn -locate the character c in string s.
 *
 * Return: pointer to the first occurence of
 * @s: string to be searched
 * @accept: character to be found.
 */
unsigned int  _strspn(char *s, char *accept)
{

	unsigned int j = 0;

	while (*s && strchr(accept, *s++))
	{
		j++;
	}
	return (j);
}
