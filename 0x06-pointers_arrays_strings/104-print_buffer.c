#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints out a buffer in a specified manner
 * @b: pointer to the buffer
 * @size: size per line to be printed of the buffer
 *
 * Return: Always 0.
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	if (size <= 0)
	{
		printf("\n");
	}
	else
		while (i < size)
	{

		if (b[i] < ' ' || b[i] > '~')
			b[i] = '*';
		if ((i % 10 == 0) && b)
		{
		printf("\n%p", &b[i]);
		}
		if ((i % 2 == 0) && b)
			printf("\t");
		printf("%x2", b[i]);
		i++;
	}
	printf("\n");
}
