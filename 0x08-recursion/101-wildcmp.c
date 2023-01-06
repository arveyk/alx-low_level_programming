#include "main.h"
#include <string.h>

/**
 * wildcmp - compares if two strings are equal using recursion
 *
 * Return: 1 if strings are identical 0 if not
 * @s1: first string
 * @s2: second string
 */
int wildcmp(char *s1, char *s2)
{

static int x = 0;

	int len1 = strlen(s1);
	int len2 = strlen(s2);

static int c = 0;

	if (len1 != len2)
		return (0);
	else if (x < len1)
	{

		if (s1[x] == s2[x])
			c++;
		x++;
		wildcmp(s1, s2);
	}

	if (c == x)
		return (1);

	return (0);
}
