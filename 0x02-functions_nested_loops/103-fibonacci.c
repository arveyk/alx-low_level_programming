#include <stdio.h>

/**
 * main -prints the sum of even numbers in the fibonacci seq
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib = 0;
	long int even_s = 0;
	long int prev1 = 0;	/* number n-2 */
	long int prev2 = 1;	/* number n-1 */


	while (fib < 4000000)
	{
		if (fib % 2 == 0)
			even_s += fib;
		fib = prev2 + prev1;

		prev1 = prev2;
		prev2 = fib;
	}
	printf("%ld\n", even_s);
	return (0);
}
