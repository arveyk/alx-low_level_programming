#include <stdio.h>

/**
 * main -prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib = 0;
	long int prev1 = 0;	/* number n-1 */
	long int prev2 = 1;	/* number n-2 */

	int s = 0;

	for (; s < 98; s++)
	{
		if (s > 0 && s < 98)
			printf(", ");
		fib = prev1 + prev2;
		printf("%ld", fib);
		prev1 = prev2;
		prev2 = fib;
	}
	putchar('\n');

	return (0);
}
