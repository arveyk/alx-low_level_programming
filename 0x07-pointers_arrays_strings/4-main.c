#include "main.h"
#include <stdio.h>

/**
 * main - contains strings to be tested
 *
 * Return: Always 0.
 */
int main(void)
{

	char *s = "hello, world";
	char *f = "wolrd";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
