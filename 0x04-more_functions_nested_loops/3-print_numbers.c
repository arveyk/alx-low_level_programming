#include "main.c"

/**
 * print_numbers -print from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int p;

	p = 0;

	while (p < 10)
		_putchar(p);
	_putchar('\n');
}
