#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: first number
 * @b:second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub - adds two numbers
 * @a: first number
 * @b second number
 *
 * Return: sum of a and b
 */
int op_sub(int a, int b)
{

	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{

	return (a * b);
}
/**
 * op_div - divides a by b
 * @a: first number
 * @b second number
 *
 * Return: quotient of a divided by b
 */
int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - extracts the remainder of division of a by b
 * @a: first number
 * @b second number
 *
 * Return: remainder of division of a by b
 */
int op_md(int a, int b)
{

	return (a % b);
}
