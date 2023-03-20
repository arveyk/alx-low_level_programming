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

	int t = 0, v = 0;

	while (*(s + v) >= '0' && *(s + v) <= '9')
	{
		v =  v + (*(s + v) - '0');
		t++;
	}
	return (v);
}
