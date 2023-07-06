#include "main.c"

/**
 * clear_bit - sets a bits value at a given position to 0
 * @n: pointer to the number
 * @index: position
 *
 * Return: 1 if it works, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	n = (1 << index) ^ n;
	return (1);
}
