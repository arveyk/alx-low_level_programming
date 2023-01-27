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

	char *c;
	int i;
	float f;
	char * s;
	
	va_list lizts;

	va_start(lizts, format);
	while(format)
	{
		c = va_arg(lizts, char *);
		if (c)
			printf("%s", c);
		else{
		s = va_arg(lizts,char *);
		if (s)
			printf("%s", s);
		}
	}

	while(format)
	{
	
		i = va_arg(lizts, int);
		if (i)
			printf("%d", i);
		else {
		f = va_arg(lizts, double);
		if (s)
			printf("%f", f);
		}
	}


	va_end(lizts);
	
}
