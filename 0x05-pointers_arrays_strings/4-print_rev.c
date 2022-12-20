#include "main.h"

/**
 * print_rev - reveses the order of a string
 *
 * Return: void of return value
 * @s: pointer to string to be reversed
 */
void print_rev(char *s)
{

	int len, p;
	char str, end, g;

	len = _strlen(*s);
	str = *s;
	end = *s;

	for  (p = 0; p < len - 1; p++)
		end++;
	for (p = 0; p < len / 2; p++)
	{
	
		g = end;
		end = str;
		str = g;

		str++;
		end--;
	}
}
