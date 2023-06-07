#include "main.h"

/**
 * factorial - computes the factrial of a number
 * @n: the number
 *
 * Return: Result of computation
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
