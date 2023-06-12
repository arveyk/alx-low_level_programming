#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code for Alx School students.
 *
 * Return: Always 0.
 */
int main(void)
{

	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
	
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
