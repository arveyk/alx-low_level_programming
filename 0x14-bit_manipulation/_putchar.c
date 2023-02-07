#include <unistd.h>

/**
 * _putchar - prints out the character c
 * @c: the caharacter to be printed
 *
 * Return: 1 if successful or -1 if otherwise, errno being
 * set accordingly
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
