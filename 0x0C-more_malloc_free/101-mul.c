#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -finds the product of two numbers
 * @argc: counter of number of arguments from terminal
 * @argv: an array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	long long num1;
	long long num2;
	long long mul;

	if (argc != 3)
	{
		_putchar('\n');
		exit(98);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		if (num1 < '1' || num1 > '9' || num2 < '1' || num2 > '9')
		_putchar('\n');

	}

	mul = num1 * num2;

	printf("%lld\n", mul);

	return (0);
}
