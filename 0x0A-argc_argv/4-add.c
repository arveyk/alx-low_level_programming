#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sums arguments if they are numbers
 * @argc: count of the number of parameters
 * @argv: pointer to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int x, p = 0;

	if (argc == 1)
	{
		printf("0\n");
		exit(1);
	}
	else
	{
		for (x = 1; x < argc; x++)
	{
		p = (atoi(argv[x]));
		add += p;

		if (!p)
		{
			printf("Error\n");
			exit(1);
		}
	}
	}
	printf("%d\n", add);

	return (0);
}
