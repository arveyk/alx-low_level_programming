#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 *
 * Return: returns 1 if input is a prime number
 * returns 0 if number is not a prime
 */
int is_prime_number(int n)
{

	int e = 0;

	if (n == 0)
		return (0);
	
	is_prime_number	(e %= n-1);
	
	if (e == 0)
	{
		return 0;
	}
	else
		return (1);
}
