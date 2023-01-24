#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings to std output
 * @separator: pointer to the charcacter separator
 * @n: number of strings to be printed
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int w;
	va_list args;
	char *s;


	va_start(args, n);

	for (w = 0; w < n; w++)
	{
		s = va_arg(args, char *);
		
		printf("%c", *(s++));
		if (w < (n - 1))
			printf("%c", *separator);
	}

	va_end(args);
	putchar('\n');
}
