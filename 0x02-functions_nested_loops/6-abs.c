#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * Return: integer value
 * @r: the variable holding the int to be evaluated
 */
int _abs(int r)
{


	if (r < 0)
		return (r = -r);
	if (r >= 0)
		return (putchar(r));

	return (0);
}
