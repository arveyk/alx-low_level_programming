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

	int count = 1;
	int sum = 0;

	if (argc == 0)
		printf("0\n");
	else
	{

		for (; count < argc; count++)
		{
			sum += atoi(argv[count]);
			if (!sum)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
