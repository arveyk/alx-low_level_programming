#include "main.h"

/**
 * print_line - prints line n times
 *
 * Return: void
 * @n: the number of time line will be printed
 */
void print_line(int n)
{

	int g;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (g = 1; g <= n; g++)
		{

			_putchar('_');
		}
			_putchar('\n');
	}
}
