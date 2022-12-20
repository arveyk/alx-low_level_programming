#include "main.h"

/**
 * puts2 - selects even numbers to be printed
 *
 * Return: none
 * @str: pointer to string of numbers to be printed
 */
void puts2(char *str)
{


	while (*str++ != '\0')
	{
		if (*str % 2 == 0)
			_putchar(*(str - 2));
	}

	_putchar('\n');
}
