#include "main.h"

/**
 * times_table - prints the times table for 9
 *
 * Return: none
 */
void times_table(void)
{

	int r, j, p;

	for (r = 0; r <= 9; r++)
	{	for (j = 0; j <= 9; j++)
		{

			p = r * j;
			_putchar('0' + p);
			_putchar(',');
			_putchar(' ');

		}
	_putchar('\n');
	}
}
