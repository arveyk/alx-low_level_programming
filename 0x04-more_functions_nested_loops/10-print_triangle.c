#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * Return: void
 * @size: size of triangle
 */
void print_triangle(int size)
{

	int n;


	if (size <= 0)
		_putchar('\n');
	else
	       for (n = size; n > 0; n--)
	       {
		_putchar(35);

/*		for (l = 1; l != n; l++)
		{
			_putchar(35);
		}*/
		_putchar('\n');
		}
}
