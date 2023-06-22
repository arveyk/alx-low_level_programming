#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: what separates the numbers
 * @n: number of integers passed to the function
 *
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int r = 0;
	va_list ap;

	va_start(ap, n);

	while (r < n)
	{
		if (separator != NULL && r > 0)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
		r++;
	}
	va_end(ap);
	printf("\n");
}
