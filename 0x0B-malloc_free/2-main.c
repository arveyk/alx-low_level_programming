#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - supplies strings to  be concatenated and prints the result
 *
 * Return: Always 0.
 */
int main(void)
{

	char *s;

	s = str_concat("Betty", "Holberton");
	if (s == NULL)
	{

		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
