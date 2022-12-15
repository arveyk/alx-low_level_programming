#include "main.h"

/**
 * print_diagonal - prints diagonal using \
 *
 * Return: Void(none)
 * @n: the number of times for space to be printed
 */

void print_diagonal(int n)
{

	int t, b;

	if (n <= 0)
		_putchar('\n');
	else
		for (t = 1; t <= n; t++)
		{
			for (b = 1; b <= n; b++)
			{
			_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	_putchar('\n');
}
