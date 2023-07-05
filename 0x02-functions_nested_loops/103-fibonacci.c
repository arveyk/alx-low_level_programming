#include <stdio.h>

/**
 * main -prints the sum of even numbers in the fibonacci seq
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib = 0;
	long int prev1 = 1;	/* number n-2 */
	long int prev2 = 2;	/* number n-1 */


	for (; fib < 4000000;)
	{
		if (fib % 2 == 0)
			printf("%ld\n", fib);
		fib = prev1 + prev2;

		prev1 = prev2;
		prev2 = fib;
	}
	return (0);
}
