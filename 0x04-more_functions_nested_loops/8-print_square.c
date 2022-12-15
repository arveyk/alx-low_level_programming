#include "main.h"

/**
 * print_square - prints square shape using #
 *
 * Return: void
 * @size: variable whose value is to be used
 */
void print_square(int size)
{

	int r, k;

	if (size <= 0)
		_putchar('\n');
	else
		for (k = 1; k <= size; k++)
		{
			for (r = 1; r <= size; r++)
		{
			_putchar(35);
		}
			_putchar('\n');
		}

}
