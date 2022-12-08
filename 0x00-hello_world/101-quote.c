#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{


	char c[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-11\n";

	write(2, c, 60);

	return (1);

}
