#include "main.h"

/**
 * is_prime_number - checks if a number is a prime
 * @n: the number to be checked
 *
 * Return: 1 if the number is a prime, 0 if not
 */
int is_prime_number(int n)
{

	int h = 2;
	int half = n / 2;
	int mod;

	if (h <= half)
	{

		mod = n % h;
		if (mod == 0 && h == half)
			return (1);
		h++;
	is_prime_number(n / (h - 1));
	}
	return (0);
}
