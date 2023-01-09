#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of the numbers it receives
 *
 * Return: Always 0.
 * @argc: counts the number of argument
 * @argv: points to the string entered as arguments
 */
int main(int argc, char *argv[])
{
	int s, q;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		s = atoi(argv[1]);
		q = atoi(argv[2]);
		printf("%d\n", s * q);
	}

	return (0);

}
