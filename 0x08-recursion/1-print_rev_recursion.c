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

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
