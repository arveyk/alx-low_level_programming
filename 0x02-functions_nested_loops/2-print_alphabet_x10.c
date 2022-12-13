#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the lowercase letters
 *
 * Return: Does not have return value
 */
void print_alphabet(void)
{

	int q, m;

	q = 'a';

	for (m = 1; m <= 10; m++)
	{
		while (q <= 'z')
		{
			_putchar(q);
			q++;
		}
		_putchar('\n');
	}
}
