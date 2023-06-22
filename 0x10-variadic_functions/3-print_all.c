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
	int len_form = strlen(format);

	va_start(ap, format);
	while (format[step] != '\0')
	{
		switch (format[step])
		{
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 'c':
				c = va_arg(ap, int);
				printf("%c", c);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				break;
		}
		if (step > 0 && step < len_form - 1)
			printf(", ");
		step++;
	}
	va_end(ap);
	printf("\n");
}
