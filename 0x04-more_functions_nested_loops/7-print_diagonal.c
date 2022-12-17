#include "main.h"

/**
 * print_diagonal - prints diagonal using \
 *
 * Return: Void(none)
 * @n: the number of times for space to be printed
 */

void print_diagonal(int n)
{

	int b, h;

	if (n <= 0)
		_putchar('\n');
	else
		{
		for(h = 1; h <= n; h++)
		{ 
			for (b = 1; b <= h; b++)
			{
			_putchar(' ');
		
			_putchar(92);
			}	
			_putchar('\n');
		}
		
		}
		
	_putchar('\n');
}
