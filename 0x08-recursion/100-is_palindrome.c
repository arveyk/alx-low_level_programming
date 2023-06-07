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

	int p = strlen(s) - 1;
	if (s == NULL)
		return 1;
	if (s[0] != s[p])
		return (0);
	return (s[0] + s[p - 1]);
}
