#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: what separates the strings
 * @n: number of strings passed
 *
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int q = 0;
	va_list ap;
	char *str = NULL;

	va_start(ap, n);

	while (q < n)
	{

		if (separator != NULL && q > 0)
			printf("%s", separator);

		str = va_arg(ap, char *);
		if (str	== NULL)
			printf("nil");
		else
			printf("%s", str);
		q++;
	}
	va_end(ap);
	printf("\n");
}
