#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{

	char alpha, beta;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (beta = 'A'; beta <= 'Z'; beta++)
		putchar(beta);
	putchar('\n');

	return (0);
}
