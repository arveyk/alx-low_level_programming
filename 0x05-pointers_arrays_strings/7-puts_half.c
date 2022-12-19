#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of the string
 *
 * Return: void
 * @str: pointer to string.
 */
void puts_half(char *str)
{

	int y = strlen(*str);
		if (y % 2 == 0)
		{
			while (y++)
				_putchar(*str + y);

		}
		else
		{
			y = (y - 1) / 2;
			while (y++)
		       _putchar(*str + y);

		}
	_putchar('\n');

}
