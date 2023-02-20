#include "main.h"
#include <string.h>

/**
 * puts_half - print second half of string
 * @str: pointer to string of numbers to be printed
 *
 * Return: none
 */
void puts_half(char *str)
{
	int g = strlen(str);
	int k;

	if (g % 2 == 0)
	{	k = g / 2;
		while (k < g)
		{
			_putchar(str[k]);
			k++;
		}
	}
	else
	{
		k = (g - 1) / 2;
		while (k < g)
		{
			_putchar(str[k]);
			k++;
		}
	}

	_putchar('\n');

}
