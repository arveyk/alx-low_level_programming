#include <stdio.h>

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
	int(*main_ptr)(int, char **);


	if (ac != 1)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(*av[ac]);
	if (!bytes || bytes < 0)
	{
		printf("Error\n");
		exit(1);
	}
	printf("%s\n", *main_ptr);
	return (0);
}
