#include <stdio.h>
#include "main.h"

/**
 * main - prints the value of n before and after alteration be clear_bit fcn 
 *
 * Return: Always 0.
 */
{

	unsigned long int n;

	n = 1024;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 0;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	clear_bit(&n, 1);
	printf("%lu\n", n);
	return (0);
}