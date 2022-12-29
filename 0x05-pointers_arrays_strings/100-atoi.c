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

	int t = strlen(s);

	while (*s++ != '\0')
		t = t +  (*s++ + '0');
	return (t);
}
