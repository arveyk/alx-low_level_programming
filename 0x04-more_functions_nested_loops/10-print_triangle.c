#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * Return: void
 * @size: size of triangle
 */
void print_triangle(int size)
{


	int n, k, p;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (n = size; n >= 1; n--)
		{
			for (p = 1; p++ < n;)
				_putchar(' ');
			for (k = n; k++ <= size;)
			_putchar(35);

		_putchar('\n');
		}
	}
}
