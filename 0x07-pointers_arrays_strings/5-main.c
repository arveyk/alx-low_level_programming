#include "main.h"
#include <stdio.h>

/**
 * main - contains string to be checked
 *
 * Return: Always 0.
 */
int main(void)
{

	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
