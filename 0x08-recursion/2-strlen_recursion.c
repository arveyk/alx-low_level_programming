#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{

	int len = 0;

	if (*s == '\0')
		return (len);
	len++;
	_strlen_recursion(s);
	return (s[len]);
}
