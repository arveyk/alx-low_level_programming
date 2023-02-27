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

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}

	for (x = 1; x < argc; x++)
	{
		p = (atoi(argv[x]));

		if (!p)
		{
			printf("Error\n");
			return (1);
		}
		add += p;
	}
	printf("%d\n", add);

	return (0);
}
