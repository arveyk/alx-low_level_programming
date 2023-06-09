#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints is name to stdout
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	
	int mult = 1;
	int count;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (count = 1; count < argc; count++)
		{
			mult *=  atoi(argv[count]);
		}
	printf("%d\n", mult);
	return (0);
}
