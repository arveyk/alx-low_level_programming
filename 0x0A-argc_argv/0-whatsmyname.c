#include <stdio.h>

/**
 * main - prints its name.
 *
 * Return: Always 0.
 * @argv: points to argument character
 * @argc: counters the number of parameters
 */
int main(int argc, char *argv[])
{

	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
