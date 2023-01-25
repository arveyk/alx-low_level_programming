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

	unsigned int w = 0;
	char *p;
	va_list lizts;


	va_start(lizts, n);

	while (w++ < n)
	{
		p = va_arg(lizts, char *);
		printf("%s", p);
		if (w < n)
			printf("%s", separator);
	}
	va_end(lizts);
	putchar('\n');
}
