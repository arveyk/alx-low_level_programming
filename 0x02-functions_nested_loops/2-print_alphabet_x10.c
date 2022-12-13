#include "main.h"

/**
 * print_alphabet_x10 - Function being called
 * by main to print alpha x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{

	int y, v;


	for (v = 0; v <= 10; v++)
	{

		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);

		}
		_putchar('\n');
	}
}
