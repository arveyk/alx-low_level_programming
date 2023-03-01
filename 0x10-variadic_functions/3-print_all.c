#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything passed to it
 * @format: list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{

	char c;
	int i;
	double f;
	char *s;

	char *fmt = (char *)format;
	
	va_list lizts;

	va_start(lizts, format);
	while (*fmt)
	{	switch (*fmt)
		{
			case 'c':
				c = va_arg(lizts, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(lizts, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(lizts, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(lizts, char *);
				printf("%s", s);
				break;
			default:
				break;
		}
		++fmt;
	}
	va_end(lizts);
	printf("\n");
	
}
