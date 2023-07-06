#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a character at a time to stdout
 * @c: character to print
 *
 * Return: 1 on success, -1 otherwise, errno being set accordingly
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
