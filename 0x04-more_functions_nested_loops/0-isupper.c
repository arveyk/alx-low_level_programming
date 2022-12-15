#include "main.h"

/**
 * _isupper.c - checks for upper case chars
 *
 * Return: integer value
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)	
		return (1);
	else
		return (0);
}
