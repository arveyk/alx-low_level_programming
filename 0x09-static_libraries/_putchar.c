#include <unistd.h>

/**
 * _putchar - prints a character to std
 * @c: character to be printed
 *
 * Return: 1 if successfull, -1 if not Errno being set accordingly
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
