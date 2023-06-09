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
	int count = 1;
	int num;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	       while (count < 3)
		{
			num = atoi(argv[count]);
			if (num)
				mult = mult * num;
			count++;
		}
	printf("%d\n", mult);
	return (0);
}
