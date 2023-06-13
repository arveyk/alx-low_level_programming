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
	int a = 1;

	if ((a * a) == n)
		return (a);
	if (a >= p)
		return (-1);
	
	return (1 + _sqrt_recursion(a));
}
