#include <stdio.h>

/**
 * main - prints a pattern
 *
 * Return: void
 */
int main(void)
{
	int v;

	for (v = 1; v <= 100; v++)
	{
		if (v <= 100 && v > 1)
			printf(" ");

	if ((v % 5 == 0) && (v % 3 == 0))
		printf("FizzBuzz");
	else
		if (v % 3 == 0)
		printf("Fizz");
	else
		if (v % 5 == 0)
		printf("Buzz");
	else
		printf("%d", v);
	}
	printf("\n");

	return (0);
}
