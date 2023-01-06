#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 *
 * Return: returns 1 if input is a prime number
 * returns 0 if number is not a prime
 */
int is_prime_number(int n)
{

	int e = n / 2;

	if (e == 1)
		return (1);
	
	else if (n % e == 0)
		return 0;
	else
	{
	
		e -= 1;
		is_prime_number(n);
	}
		return (0);
}
