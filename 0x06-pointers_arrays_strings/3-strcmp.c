#include "main.h"

/**
 * _strcmp - compares strings
 *
 * Return: number of byte indicating diffence.
 * @s1: 1st string
 * @s2: string to be compared to first.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
		if (*s1 == *s2)
			return (0);
		else
			return (*s1 - *s2);
}
