#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints a pattern
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int v;

	for (v = 0; v <= 100; v++)
	{
	printf("%d  ", v);
	if (v % 15 == 0)
		printf("FizzBuzz ", v);
	else
		if (v % 3 == 0)
		printf("Fizz");
	else
		if (v % 5 == 0)
		printf("Buzz");
	}
}
