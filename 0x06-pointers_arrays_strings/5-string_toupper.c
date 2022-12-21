#include "main.h"

/**
 * *string_toupper - converts lowercase letters to upper in a string
 *
 * Return: converted string
 */
char *string_toupper(char *y)
{

	for ( ; *y++; )
		if ( *y == 'a')
		y = 'A' + '0';
	return (y);

}
