#include <unistd.h>

/**
 * _putchar - print the character c to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on failure, errono being set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c ,1));
}
