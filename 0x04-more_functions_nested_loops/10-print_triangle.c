#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * Return: void
 * @size: size of triangle
 */
void print_triangle(int size)
{

	int n, l;


	if (size <= 0)
		_putchar('\n');
	else
	       for (n = size; n >= 1; n--)	
	       {
		_putchar(' ');

		for (l = 1; l <= size; l++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
}
