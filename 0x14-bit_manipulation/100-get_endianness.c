#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{

	unsigned int e = 1;
	char *c = (char *)&e;

	return ((int)*c);
}
