#include "main.h"

/**
 * main - prints numbers
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{

	int y = 0;

	while (y++)
	{
		_putchar('0' + y);
	if (y == 2 || y == 4)
		continue;
	}
}
