#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one to be combined
 * @s2: string two to be combined
 * @n: used to allcate space using malloc
 *
 * Return: pointer to newlly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int v;

	if (n >= len1)
	{
		ptr = malloc(len1 + len2 + 1);
		if (!ptr)
			return (NULL);
	}
	else
	{
		ptr = malloc(len1 + n);
		if (!ptr)
			return (NULL);
	}

	for (v = 0; v < len1; v++)
		ptr[v] = s1[v];

	for (v = 0; v < n; v++)
		ptr[len1 + v] = s2[v];
	ptr[len1 + len2] = '\0';

	return (ptr);
}
