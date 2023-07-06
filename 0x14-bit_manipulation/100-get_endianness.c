#include "main.h"
#include <stddef.h>

/**
 * get_endianness - detects if a system is big or little endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *c = NULL;
	unsigned int q = 1;

	c = (char *)&q;
	return ((int)*c);
}
