#include "main.h"
#include <sdio.h>

/**
 * main - checks if _isdigit functions
 *
 * Return: Always 0.
 */
int main(void)
{

	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
