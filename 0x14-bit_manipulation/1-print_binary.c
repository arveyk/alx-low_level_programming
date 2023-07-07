#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * @n: the number
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	int bin = 63;
	char bin_rep;
	char flip = 'a';

	if (n < 2)
		_putchar(n + '0');
	else
		while (bin >= 0)
		{
			bin_rep = (1 & (n >> bin)) + '0';
			if (bin_rep == '1')
				flip = 'b';
			if (flip == 'b')
				_putchar(bin_rep);
			bin--;
		}
}
