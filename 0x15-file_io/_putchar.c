#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 *
 * Return: 1 if successful, -1 otherwise, errno set appropritely
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
