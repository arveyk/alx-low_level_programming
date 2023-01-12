#include "main.h"

/**
 * print_times_table - prints the times table n times
 *
 * Return: void
 */
void print_times_table(int n)
{
	int g = 0;
	int j = 0;
	int p;

	for(; g++ <= n; )
	{	
		p = g * j;
		for (; j++ <= g ; )
			_putchar(p);
	}

}
