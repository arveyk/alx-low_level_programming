#include "main.h"

/**
 * _sqrt_recursion - evaluates the square root of a number
 * @n: the number to be evaluated
 *
 * Return: the answer, -1 if it does not have a squareroot
 */
int _sqrt_recursion(int n)
{

	int p = n / 2;

	if (p)
	{
		if ((n / p) == 1)
			return (p);
	}

	return (n / (p - 1));
}
