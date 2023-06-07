#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: None
 */
void _print_rev_recursion(char *s)
{

	int res = 0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_print_rev_recursion(&s[res + 1]);
}
