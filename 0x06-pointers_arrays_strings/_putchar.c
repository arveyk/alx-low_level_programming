#include <unistd.h>

/**
 * _putchar - writes the character c to the standard out
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returnes, and errno is set appropriately.
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
