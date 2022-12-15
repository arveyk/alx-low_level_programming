#include "main.h"

/**
 * main - prints numbers
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{

	int y = 0;

	while (y < 10)
	{
	_putchar(y);
	
	y++;
	if (y == 2) 
		continue;
	if (y == 4)
		continue;

	}

	_putchar('\n');
}
