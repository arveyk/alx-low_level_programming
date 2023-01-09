#include <stdio.h>

/**
 * main -prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fib = 0;
	long int prev1 = 2;	/* number n-1 */
	long int prev2 = 1;	/* number n-2 */

	int s = 1;
	
	do
       	{
		printf("%d, ", s++);
	}while (s < 3);

	for (s = 4; s++ < 98; )
	{
	       
		fib = prev1 + prev2;
		prev2 = prev1;
		prev1 = fib;
		printf("%ld", fib);
		if (s < 98)
			printf(", ");



	}
	putchar('\n');

	return (0);
}
