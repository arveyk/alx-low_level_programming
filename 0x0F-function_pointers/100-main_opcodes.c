#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char *av[])
{

	int bytes;
	int b = 0;
	int (*main_ptr)(int, char **);

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(av[1]);
	if (!bytes || bytes < 0)
	{
		printf("Error\n");
		exit(1);
	}
	while (b < bytes)
	{
		if (bytes && bytes % 2)
			printf(" ");
		printf("%0lx02", (unsigned long int)&main_ptr);
		b++;
	}
	printf("\n");

	return (0);
}
