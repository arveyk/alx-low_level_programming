#include "main.h"

/**
 * *string_toupper - converts lowercase letters to upper in a string
 *
 * Return: pointer to converted string
 * @y: pointer to sring to be converted
 */
char *string_toupper(char *y)
{

	int p = 0;

	while (*(y + p) != '\0')
	{
		if (*(y + p) >= 'a' && *(y + p) <= 'z')
		{
			*(y + p) -= 32;
		}
		p++;
	}
	return (y);

}
