#include <unistd.h>

/**
 * _putchar - writes the character c to standard out
 * @c: The character to be printed
 *
 * Return: on success 1
 * On error, -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
