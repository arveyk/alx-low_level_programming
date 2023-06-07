#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 *
 * Return: No value
 */
void _puts_recursion(char *s)
{
	int q = 0;
	int len = strlen(s);


	if (q == len)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[q]);
	q++;
	_puts_recursion(&s[q]);
}
