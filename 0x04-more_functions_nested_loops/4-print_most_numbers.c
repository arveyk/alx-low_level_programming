#include "main.h"

/**
 * print_most_numbers - prints numbers execept 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{

	int y;

	for (y = 48; y < 57; y++)
	{
	if (y == 50 || y == 52)
		continue;
	_putchar(y);

	}

	_putchar('\n');
}
