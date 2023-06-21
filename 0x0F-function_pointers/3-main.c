#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - starting point
 * @ac: Argument count, from command line
 * @av: Argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{

	int a;
	int b;
	char *p = "-";
	char *div = "/";
	int res;
	int (*opr_ptr)(int, int);

	if (ac != 4 || av == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	p = av[2];
	b = atoi(av[3]);

	if (p == div && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	opr_ptr = get_op_func(p);
	if (opr_ptr == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	res = opr_ptr(a, b);
	printf("%d\n", res);
	return (0);
}
