#include "main.h"

/**
 * _isalpha  - checks for alphabets
 *
 * Return: 1 if c is lower or upper
 * 0 if otherwise
 * @c: variable being checked
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
