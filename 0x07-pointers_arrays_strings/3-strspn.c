#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate the character c in string s.
 *
 * Return: pointer to the first occurence of 
 * @s: string to be searched
 * @c: character to be found.
 */
unsigned int  _strspn(char *s, char *accept)
{

	unsigned int j = 0;
	
	while (*s++  != '\0')
	{
		if (s == accept)
		{
			j++;
		}
	}
	return (j);
}
