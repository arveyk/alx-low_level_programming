#include <stdio.h>

/**
 * main -prints the sum of even numbers in the fibonacci seq
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib = 0;
	long int prev1 = 2;	/* number n-1 */
	long int prev2 = 1;	/* number n-2 */

	int s;
	int sum;


	for (s = 0; s++ < 98; )
	{
		if (s < 3) do
		{
			printf("%d, ", s++);
		}while (s < 3);

		else 
		{
			fib = prev1 + prev2;
		if (fib % 2 == 0)
			sum += fib;

		prev2 = prev1;
		prev1 = fib;
		}



	}
	putchar('\n');

	return (0);
}
