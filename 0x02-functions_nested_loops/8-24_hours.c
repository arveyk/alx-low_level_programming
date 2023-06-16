#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: None
 */
void jack_bauer(void)
{

	int y;
	int z;

	for (y = 0; y < 24; y++)
		for(z = 0; z < 60; z++)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar(':');
			_putchar((z / 10) + '0');
			_putchar((z % 10) + '0');
			_putchar('\n');
		}
}
