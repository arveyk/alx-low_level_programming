#include "main.h"

/**
 * print_sign - prints the sign of
 * a number.
 *
 * Return: 1 if +ve, 0 if n is zero
 * -1 if n if _ve
 *  @n: function parameter
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else
		if (n == 0)
		{
		_putchar('0');
		return (0);
		}
	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
