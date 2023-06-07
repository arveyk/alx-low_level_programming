#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 if successful, -1 otherwise, ERRNO be set appripriately
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
