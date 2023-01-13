#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -finds the product of two numbers
 * @num1: first number
 * @num2: second number
 */
int main(int argc, char *argv[])
{
	long num1;
	long num2;
	long mul;
	
	if (argc != 3)
	{
		_putchar('\n');
		exit (98);
	}

	else 
	{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);

		if(num1 < '1' || num1 > '9' || num2 < '1' || num2 > '9')
		_putchar('\n');

	}

	mul = num1 * num2;

	printf("%li\n", mul);

	return (0);
}
