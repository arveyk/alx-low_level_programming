#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers to output
 * @separator: string to be printed between numbers.
 * @n: number of integers to be printed
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	int r;
	va_list ptr;

	va_start(ptr, n);

	for (r = 0; r < (int)n; r++)
	{

		printf("%d", va_arg(ptr, int));
		if (r < (int)(n - 1))
		{
			if (separator == NULL)
			continue;
			printf("%s", separator);
		}
	}

	va_end(ptr);
	printf("\n");
}
