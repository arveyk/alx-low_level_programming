#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{


	int n;


	while(n < 10)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');

	return (0);
}