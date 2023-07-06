#include "main.h"

/**
 * set_bit - sets the value of a bit at a give position to 1
 * @n: pointer to the number
 * @index: the position
 *
 * Return: 1 if possible, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 31)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
