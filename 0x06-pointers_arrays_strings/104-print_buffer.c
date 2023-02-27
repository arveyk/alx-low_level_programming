#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
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
