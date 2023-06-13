#include "main.h"
#include <stdio.h>
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
	if (*s == '\0')
		return;
	printf("%s", (s + 1));
	_print_rev_recursion(s);
}
