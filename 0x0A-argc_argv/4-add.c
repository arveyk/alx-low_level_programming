#include <stdio.h>
#include <stdlib.h>

/**
 * main - sums arguments if they are numbers
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int x, p;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	p = atoi(argv[1]);
	x = atoi(argv[2]);

	if ((p <= '/' || p >= ':') || (x <= '/' || x >= ':'))
		printf("Error\n");

	else 
		add += (p + x);
	printf("%d\n", add);

	return (0);
}
