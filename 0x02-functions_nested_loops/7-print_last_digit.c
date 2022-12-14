#include "main.h"

/**
 * print_last_digit - show last digit of a number
 *
 * Return: the value of the last digit
 * @r: variable whose value is to be evaluated
 */
int print_last_digit(int r)
{

	if (r < 0)
	{
		r = r % (-1 * 10);
		return (r);
	}
	else
		return (r % 10);
	return (0);
}
