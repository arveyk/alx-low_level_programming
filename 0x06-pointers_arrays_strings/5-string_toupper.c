#include "main.h"

/**
 * *string_toupper - converts lowercase letters to upper in a string
 *
 * Return: converted string
 */
char *string_toupper(char *y)
{

	while (*y != '\0')
	{	if (*y >= 'a' && *y <= 'z')
		*y -= 32;
		++y;
	}
	return (y);

}
