#include "main.h"

/**
 * _isupper - checks for upper case chars
 *
 * Return: integer value
 * @c: variable to be evaluated
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
