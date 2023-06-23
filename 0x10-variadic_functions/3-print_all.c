#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints all its arguments
 * @format: list of types of arguments passed
 *
 * Return: No value
 */
void print_all(const char * const format, ...)
{
	int step = 0;
	va_list ap;
	char *s;
	int i;
	float f;
	char c;
	int indicate = 0;

	va_start(ap, format);
	while (format[step] != '\0')
	{
		if (indicate == 1)
			printf(", ");
		switch (format[step])
		{
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				indicate = 1;
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				indicate = 1;
				break;
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				indicate = 1;
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				indicate = 1;
				break;
			default:
				indicate = 0;
				break;
		}
		step++;
	}
	va_end(ap);
	printf("\n");
}
