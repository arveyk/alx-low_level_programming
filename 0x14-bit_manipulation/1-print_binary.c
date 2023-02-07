#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * @n: the number whose binary is to be printed
 *
 * Return: NO value
 */
void print_binary(unsigned long int n)
{

	if (n >> 1)
	{
	
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
