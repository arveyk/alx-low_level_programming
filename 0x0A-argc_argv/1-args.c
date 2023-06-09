#include <stdio.h>

/**
 * main - prints is name to stdout
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{

	printf("%d\n", (argc - 1));
	return (0);
}
