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

	int res = 1;

	if (y == 1)
		return (res);
	return (res *=  _pow_recursion(x, (y - 1)));

}
