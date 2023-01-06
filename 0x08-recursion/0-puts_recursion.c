#include "main.h"

/**
 * _puts_recursion - prints character to standard out by implementing recursion
 *
 * Return: void
 * @s: pointer to string to be printed
 */
void _puts_recursion(char *s)
{


	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
