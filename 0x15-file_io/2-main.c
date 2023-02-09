#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out appended doc
 * @ac: file desc?
 * @av: pointer to string?
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
	
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
