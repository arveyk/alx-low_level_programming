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
		while (i <= size)
	{
		if (i == (10 * sizeof(int)))
		printf("\n");
	
		putchar(*b);
		b++;
		i++;
	}
}
