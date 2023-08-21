#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring from needle in string
 *
 * Return: pointer to byte in s that matches one of the bytes in accept
 * @haystack: string to be searched
 * @needle: source to be compared against
 */
char *_strstr(char *haystack, char *needle)
{
	int v, b, n, m;
	int count = 0;

	v = 0;
	while (needle[v] != '\0')
		v++;

	for (b = 0; haystack[b] != '0'; b++)
	{
		if (haystack[b] == needle[0])
		{
			for (n = 0; n < v; n++)
			{

				if (haystack[b] == needle[n])
				{

					b++;
					count++;
				}
			}

		if (count == b)
		{

			for (m = b - v; haystack[m] != '\0'; m++)
				return (haystack);
		}
		}

	}
	return (NULL);
}
