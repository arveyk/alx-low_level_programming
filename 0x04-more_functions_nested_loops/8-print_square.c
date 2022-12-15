#include "main.h"

/**
 * print_square - prints square shape using #
 *
 * Return: void
 * @size: variable whose value is to be used
 */
void print_square(int size)
{

	int r = 1;

	if (size <= 0)
		_putchar('\n');
	else
		while (r <= size)
		{
			for (size = 1; size <= size; size++)
		{
			_putchar('#');
			_putchar('\n')
		}

		}
}
