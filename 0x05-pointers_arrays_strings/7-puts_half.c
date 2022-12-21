#include "main.h"

/**
 * puts2 - selects even numbers to be printed
 *
 * Return: none
 * @str: pointer to string of numbers to be printed
 */
void puts_half(char *str)
{

	int counter, k;
	char i = *str;

	while (i++ != '\0')
		counter++;

	while (i++ != '\0')
	{
		if (counter % 2 == 0)
			for(k = 0; k++ >= (counter / 2); )
				_putchar(*(str - 2));
		else
			_putchar(*str++);

	}
	_putchar('\n');

}
