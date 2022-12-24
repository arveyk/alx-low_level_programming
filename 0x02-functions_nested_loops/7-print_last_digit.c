#include "main.h"

/**
 * print_last_digit - show last digit of a number
 *
 * Return: the value of the last digit
 * @r: variable whose value is to be evaluated
 */
int print_last_digit(int r)
{

	int l;
	if (r <= 0)
		l = r % (-1 * 10);
	else
		l = (r % 10);
	return (l);
}
