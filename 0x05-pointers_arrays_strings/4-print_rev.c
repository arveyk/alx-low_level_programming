#include "main.h"
#include <string.h>

/**
 * print_rev - reveses the order of a string
 *
 * Return: void of return value
 * @s: pointer to string to be reversed
 */
void print_rev(char *s)
{

	int len = strlen(s);
	char *v = s + len - 1;

	while (v >= s)
	{
		_putchar(*v);
		v = v - 1;
	}
	_putchar('\n');
}
