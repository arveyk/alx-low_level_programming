#include "main.h"
#include <string.h>
/**
 * _puts - prints string followed by ne line
 *
 * Return: void
 * @str: pointer to string to be printed
 */
void _puts(char *str)
{

	long unsigned int d = 0;
	while (d != strlen(*str))
	{
		_putchar(*str);
	}
	_putchar('\n'); 
}
