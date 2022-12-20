#include "main.h"
#include <string.h>
/**
 * _atoi - converts string to integers
 *
 * Return: integer type
 * @s: pointer to string to be converted
 */
int _atoi(char *s)
{

	int t = strlen(s), i;

		for (i = 0; i < t; i++)
		{

			t = t * 10 + (s[i] - '0');
		}
	return (t);
}
