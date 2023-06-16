#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints number using _putchar
 *
 * Return: void
 * @n: the variable whose values is to be converted
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
