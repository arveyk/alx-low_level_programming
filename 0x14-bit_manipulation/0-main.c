#include <stdio.h>
#include "main.h"

/**
 * main - prints number converted from binary to unsigned int
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("1");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("1e01");
	printf("%u\n", n);
	n = binary_to_uint("1100010");
	printf("%u\n", n);
	n = binary_to_uint("000000000000000000011001001");
	printf("%u\n", n);
	return (0);
}
