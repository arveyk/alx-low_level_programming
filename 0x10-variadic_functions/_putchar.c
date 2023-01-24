#include <unistd.h>

/**
 * _putchar - prints character to std
 * @c: character to be printed
 *
 * Return: 1 if successful, -1 if otherwise and errno is set appropriately
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
