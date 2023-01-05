#include <unistd.h>

/**
 * _putchar - prints character c to standard output
 *
 * Return: 1 of successfull
 * -1 if error is encountered and errno is set appropriately
 *  @c: character to be printed
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
