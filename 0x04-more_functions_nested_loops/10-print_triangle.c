#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * Return: void
 * @size: size of triangle
 */
void print_triangle(int size)
{


	int n, k; 

	if (size <= 0)
		_putchar('\n');

	else
	{       for (n = 1; n <= size; n++)
	       {
			_putchar(' ');

	       }
		       for (k = size; k != 1; k--)
		       {
			_putchar(35);
		       }
		_putchar('\n');
	}
}
