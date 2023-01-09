#include <stdio.h>

/**
 * main - evaluates the sum of natural numbers divisible by 3 0r 5
 *
 * Return: Always 0.
 */
int main(void)
{

	int sum = 0;
	int num = 0;

	for ( ; num++ < 1024; )
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
