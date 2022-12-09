#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{


	int n;

	for (n = 0; n < 10; n++)

		putchar(n + '0');


	for (n = 'a'; n <= 'f'; n++)

		putchar(n);
	

	putchar('\n');

	return (0);
}
