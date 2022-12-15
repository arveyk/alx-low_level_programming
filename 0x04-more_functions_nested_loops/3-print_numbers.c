#include "main.h"

/**
 * print_numbers -print from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int p = 0;

	while(p < 10)
	{
		_putchar('0' + p);
		p++;
	}
	_putchar('\n');
}
