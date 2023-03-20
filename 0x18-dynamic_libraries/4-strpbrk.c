#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches for any occurrence of any of the bytes in string accept
 * from string s.
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * @s: string to be searched
 * @accept: source to be compared against
 */
char *_strpbrk(char *s, char *accept)
{

	int len1, len2, r, t, y;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;

	while (accept[len2])
		len2++;

	for (r = 0; r < len1; r++)
	{

		for (t = 0; t < len2; t++)
		{

			if (s[r] == accept[t])
			{

				for (y = r; s[y] != '\0'; y++)
					return ((s + y));
			}
		}
	}

	return (NULL);
}
