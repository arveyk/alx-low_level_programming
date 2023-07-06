#include "main.h"

/**
 * get_bit - return the value of an int
 * @n: number to evaluate
 * @index: the position to check
 *
 * Return: value of a bit at an index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	return ((n >> index) & 1);
}
