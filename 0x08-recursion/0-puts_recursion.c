#include "main.h"

/**
 * _puts_recursion - prints character to standard out by implementing recursion
 *
 * Return: void
 * @s: pointer to string to be printed
 */
void _puts_recursion(char *s)
{

	int y = 0;

	if (s[y++] != '\0')
		_putchar(*s);
_puts_recursion((s + y));
}
