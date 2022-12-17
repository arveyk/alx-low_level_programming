#include "main.h"

/**
 * more_numbers - prints numbers from 0-14 x10
 *
 * Return: void
 */
void more_numbers(void)
{

	int h, j;


	for (h = 0; h < 10; h++)
	{

		for (j = 0; j <= 10; j++)
		{

			_putchar(j + '0');
		}


		for (j = 11; j <= 14; j++)
		{
			_putchar(j + '9');

		}

		_putchar('\n');
	}
}
