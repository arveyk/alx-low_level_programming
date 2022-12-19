#include "main.h"

/**
 * _strlen - counts the length of a string
 *
 * Return: integer value
 * @s: pointer to the string to be evaluated
 */
int _strlen(char *s)
{

	int count = 0;
	char arr[] = s;

		while (arr[count] != '\0')
			count++;
			
	return (count);
}
