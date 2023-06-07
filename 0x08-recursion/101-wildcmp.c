#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if they are identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int p = 0;

	if (*s1 == '\0' || *s2 == '\0')
		if (s1[p] == s2[p])
			return (1);
	p++;
	return (wildcmp(&s1[p], &s2[p]));
}
