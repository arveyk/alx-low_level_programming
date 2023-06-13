#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to be checked
 *
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{

	int p = strlen(s);
	int g = 0;

	if (s == NULL)
		return (1);
	if (g <= p)
	{
		if (s[p] != s[g])
			return (0);
		p--;
		g++;
		is_palindrome(s);
	}
	return (1);
}
