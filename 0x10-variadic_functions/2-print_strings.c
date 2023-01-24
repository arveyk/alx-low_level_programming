#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

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

	va_start(args, n);

	for (w = 0; w < n; w = va_arg(args, int))
	{

		printf("%c", (char)w);
		if (w < (n - 1))
			printf("%c", *separator);
	}

	va_end(args);
	putchar('\n');
}
