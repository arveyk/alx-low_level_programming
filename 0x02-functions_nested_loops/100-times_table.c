#include "main.h"

/**
 * times_table - prints the times table for 9
 *
 * Return: none
 */
void print_times_table(void)
{

	int r, j;
	int prd = 0;

	for (r = 0; r <= 9; r++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j < 9)
			{_putchar(',');
			_putchar(' ');
			}
			prd = j * r;
			_putchar((prd / 10) + '0');
			_putchar((prd % 10) + '0');
		}
	_putchar('\n');
	}
}
