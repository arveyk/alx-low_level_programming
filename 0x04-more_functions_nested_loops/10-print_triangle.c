#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * Return: void
 * @size: size of triangle
 */
void print_triangle(int size)
{

	int n, m, sp, t;
	sp = ' ';
	t = 35;


	if (size <= 0)
		_putchar('\n');
	else
	       for (n = 1; n <= size; n++)
	       {
			_putchar(' ');

		for (m = size; m != 0; m--)
		{
			_putchar(t++);
			_putchar(sp--);
		}
		_putchar('\n');
	       }
}
