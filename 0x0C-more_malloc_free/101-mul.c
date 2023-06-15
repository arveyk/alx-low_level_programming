#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two positive integer
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 0 if successful
 */
int main(int ac, char *av[])
{
	int num1;
	int num2;
	int mul_res;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(num1 = atoi(av[1])))
	{
		printf("Error\n");
		exit(98);
	}
	if (!(num2 = atoi(av[2])))
	{
		printf("Error\n");
		exit (98);
	}
	mul_res = num1 * num2;
	printf("%d\n", mul_res);
	return (0);
}
