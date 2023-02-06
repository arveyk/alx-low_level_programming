#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of bits needed to be flipped.
 *
 * Return: Always 0.
 */
{
	unsigned int n;

	n = flip_bits(1024, 1);
	printf("%u\n", n);
	n = flip_bits(402, 98);
	printf("%u\n", n);
	n = flip_bits(1024, 3);
	printf("%u\n", n);
	n = flip_bits(1024, 1025);
	printf("%u\n", n);
	return (0);
}
