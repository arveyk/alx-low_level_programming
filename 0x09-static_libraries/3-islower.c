#include "stdio.h"

/**
 * _islower - check for lowercase letters
 *
 * Return: 1, if c is lower
 * 0, if otherwise
 * @c: the variable to be checked
 */
int _islower(int c)
{

	if (c  >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
