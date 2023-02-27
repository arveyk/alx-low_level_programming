#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number using _putchar
 * Return: no value
 * @n: the number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
