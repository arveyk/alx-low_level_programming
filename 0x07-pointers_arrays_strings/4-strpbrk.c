#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches for any occurrence of any of the bytes in string accept
 * from string s.
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * @s: string to be searched
 * @accept source to be compared against
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s++ == *accept++)
		if (*s != *accept)
			return (NULL);

	return (s);
}
