#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{


	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		putchar(i  + '0');
		{
		for (j = 0; j < 10; j++)
		putchar(j + '0');
		{
		for (k = 10; k < 10; k++)
			putchar(k + '0');

		if (k < 10)
			{
			putchar(',');
			putchar(' ');

			}
		}
		putchar('\n');
		}
	}
	return (0);
}
