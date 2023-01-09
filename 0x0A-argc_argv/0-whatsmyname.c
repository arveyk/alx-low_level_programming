#include <stdio.h>

/**
 * main - program that prints it name even without recompling after renaming
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
