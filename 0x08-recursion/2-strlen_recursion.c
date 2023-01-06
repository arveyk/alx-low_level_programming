#include "main.h"

/**
 * _strlen_recursion - returns length of a string using recursion
 *
 * Return: length of string
 * @s: pointer to string to be evaluated
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
