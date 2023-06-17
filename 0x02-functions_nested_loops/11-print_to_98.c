#include "main.h"

/**
 * print_to_98 - prints from given number up to 98
 *
 * Return: none
 * @n: the number to start from.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				_putchar(' ');
			}
		}
	}
	else 
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
			if (n > 98)
			{
			
			_putchar('B');
				_putchar(',');
				_putchar(' ');
			}

			_putchar('\n');
		}
}
