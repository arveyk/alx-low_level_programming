#include <stdio.h>

/**
 * first - prints before main
 *
 * Return: None
 */
void first(void)__attribute__((constructor));

void first(void)
{
	printf("You're beat! and yet , you must allow,\nI bore");
	printf(" my house upon my back!\n");
}
