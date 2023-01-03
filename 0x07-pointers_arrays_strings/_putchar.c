#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out character to standard output
 * @c:character to be printed
 *
 * Return: 1 upon success
 * on erro -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
