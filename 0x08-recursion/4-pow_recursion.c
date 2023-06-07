#include "main.h"

/**
 * _pow_recursion - computes the value of a number raised to the of another
 * @x: the base
 * @y: the exponent
 *
 * Return: The result
 */
int _pow_recursion(int x, int y)
{


	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));

}
