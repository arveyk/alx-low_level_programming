#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums arguments if they are numbers
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int x, p;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (!isdigit(atoi(argv[1])) || !isdigit(atoi(argv[2])))
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		p = atoi(argv[1]);
		x = atoi(argv[2]);
		add += (p + x);
	printf("%d\n", add);
	}

	return (0);
}
