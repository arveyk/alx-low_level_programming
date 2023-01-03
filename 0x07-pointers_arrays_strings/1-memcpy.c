#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to destination dest
 *
 * Return: pointer to dest
 * @dest: destiantion area to receive data
 * @src: source area to be copied
 * @n: number of bytes to be coppied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int e = 0;


	while (e < n)
	{
		dest[e] = src[e];
		e++;
	}
	return (dest);
}
