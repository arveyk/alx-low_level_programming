#include <stdio.h>

/**
 * main -prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	int v = 1, l = 2, s, count;

	s = 0;

	for (count = 0; count < 98; ++count)
	{
		s =  v + l;
		printf("%d", s);
		printf(", ");

		v = l;
		l = s;


	}
	putchar('\n');

	return (0);
}
