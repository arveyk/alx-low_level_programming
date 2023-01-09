#include "main.h"

/**
 * times_table - prints the times table for 9
 *
 * Return: none
 */
void times_table(void)
{

	int r, j;
	int prd = 0;

	for (r = 0; r <= 9; r++)
	{	for (j = 0; j <= 9; j++)
		{

			prd = j * r;
			_putchar((prd + '0'));
			if (j < 9)
			{_putchar(',');
			_putchar(' ');
			}

		}
	_putchar('\n');
	}
}
