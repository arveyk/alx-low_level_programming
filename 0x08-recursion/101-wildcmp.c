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

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 > *s2 || *s1 < *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
