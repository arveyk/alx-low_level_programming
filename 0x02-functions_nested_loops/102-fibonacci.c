#include <stdio.h>

/**
 * main -prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib = 0;
	long int prev1 = 2;	/* number n-1 */
	long int prev2 = 1;	/* number n-2 */

	int s;


	for (s = 0; s++ <= 50;)
	{
		if (s < 3) do
		{
			printf("%d, ", s++);
		}while (s < 3);

		else 
		{
			fib = prev1 + prev2;
		prev2 = prev1;
		prev1 = fib;
		printf("%ld", fib);
		if (s < 50)
			printf(", ");
		}



	}
	putchar('\n');

	return (0);
}
