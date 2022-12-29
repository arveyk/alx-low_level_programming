#include "main.h"
#include <string.h>

/**
 * puts2 - selects even numbers to be printed
 *
 * Return: none
 * @str: pointer to string of numbers to be printed
 */
void puts_half(char *str)
{
	int g = strlen(str);
	int k;
	char j = *(str + 5);

	if (g / 2 == 0)
	{	k = g / 2;
		while (k++ < g)
			_putchar(j++);
	}
	else 
	{
		k = (g - 1) / 2;
		while (k++ < (g - 1))
			_putchar(j++);
	}

	_putchar('\n');

}
