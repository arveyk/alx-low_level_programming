#include "main.h"

/**
 * print_alphabet - prints the lowercase letters
 *
 * Return: Does not have return value
 */
void print_alphabet(void)
{

	int q;

	q = 'a';

	while (q <= 'z')
	{
		_putchar(q);
		q++;
	}
	_putchar('\n');

}
