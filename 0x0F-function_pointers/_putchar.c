#include <unistd.h>

/**
 * _putchar - prints character one at a time to stdout
 * @c: character to be printed
 *
 * Return: 1 is successful, -1 if not
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
