#include "3-calc.h"

/**
 * main - converts input string to numbers
 *
 * Return: Always 0
 */
int main(argc, argv)
{

	int num1, num2;
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	(*get_op_func(char *s))(num1, num2);
}
