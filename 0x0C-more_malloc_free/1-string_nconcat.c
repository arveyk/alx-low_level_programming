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
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int v, u;
	char *ptr = NULL;

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (!ptr)
		return (NULL);
	for (v = 0; v < len1; v++)
		ptr[v] = s1[v];

	if (n >= len2)
	{
		for (u = 0; s2 && u < len2; u++)
			ptr[v + u] = s2[u];
	}
	else
	{
		for (u = 0; s2 && u < n; u++)
			ptr[v + u] = s2[u];
	}

	ptr[v + u] = '\0';
	if (!ptr)
		return (NULL);

	return (ptr);
}
