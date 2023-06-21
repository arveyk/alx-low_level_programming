#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first number
 * @b: second number
 *
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of subtraction
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
 * Return: result of multipliction
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - does division operation
 * @a: first number
 * @b: second number
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of division of a number by another
 * @a: first number
 * @b: second number
 *
 * Return: modulus or remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
