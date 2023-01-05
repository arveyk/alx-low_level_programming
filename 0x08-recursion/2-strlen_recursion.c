#include "main.h"

/**
 * _strlen_recursion - returns length of a string using recursion
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{

	int p = 0;
	
	if (*(s++) == '\0')
		return (p);
	
	return ( p + _strlen_recursion(s++));
}
