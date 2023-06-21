#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the string to be printed
 * @f: pointer to a function to be used to print
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);
}
