#include "main.h"

/**
 * _pow_recursion - evaluates the product of x by itself y times
 *
 * Return: the result
 * @x: number to be evaluated
 * @y: exponent
 */
int _pow_recursion(int x, int y)
{


	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}

	return (x);
}
