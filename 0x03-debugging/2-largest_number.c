#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{

	int largest;

	largest = 1;

	if ((a > b && b > c) || (a > c && c > b))
	{
		largest = a;
	}
	else if ((b > c && c > a) && (b > a && a > c))
	{
		largest = b;
	}
	else
		if ((c > a && a > b) || (c > b && b > a))
	{
		largest = c;
	}

	return (largest);
}
