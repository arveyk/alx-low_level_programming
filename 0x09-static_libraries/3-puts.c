#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string followed by ne line
 *
 * Return: void
 * @str: pointer to string to be printed
 */
void _puts(char *str)
{

	for ( ; *str++ != '\0'; )
	{
		_putchar(*(str - 1));
	}
	_putchar('\n');
}
