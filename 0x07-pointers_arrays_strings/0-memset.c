#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with constant byte
 *
 * Return: character pointer
 * @s: source
 * @b: do know yet
 * @n: stores the number of bytes to be printed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter <= n)
	{

		*s = b;
		counter = counter + sizeof(char);
		s++;
	}
	return (s);
}
