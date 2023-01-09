#include <stdio.h>

/**
 * main - prints out arguments received
 *
 * Return: Always 0.
 * @argc: counts the number of arguments
 * @argv: points to the argument string
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
