#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
