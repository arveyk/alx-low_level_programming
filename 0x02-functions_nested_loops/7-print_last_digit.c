#include "main.h"

/**
 * print_last_digit - show last digit of a number
 *
 * Return: the value of the last digit
 * @r: variable whose value is to be evaluated
 */
int print_last_digit(int r)
{

	int l = 0;


	if (r >= 0)
		l = r % 10;
	else
	{
		r *= -1;
		l = r % 10;
	}
	_putchar(l + '0');

	return (l);
}
