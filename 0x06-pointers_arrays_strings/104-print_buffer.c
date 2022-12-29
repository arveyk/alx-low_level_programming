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

	char s = *b;
	if (size <= 0)
		printf("\n");
	else 
		for (;s++ <= size; )
		putc((s) , stdout);
}

