#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - converts input string to numbers
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	int num1, num2, res;
	char b[1];
	
	num1 = atoi(argv[1]);
	b[0] = *argv[2];
	b[1] = '\0';
       	num2 = atoi(argv[3]);
	
	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	if (b != "+" || *b != "-" || *b != "*" || *b != "/" || *b != "%")
	{
		printf("Error");
		exit(98);
	}

				

	res = (*get_op_func(b))(num1, num2);

	printf("%d\n", res);
	return (0);
}
