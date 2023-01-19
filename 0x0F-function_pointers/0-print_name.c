#include "function_pointers.h"

/**
 * print_name - prints name given to it
 * @name: pointer to string name
 * @f:pointer to function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{

	(*f)(name);
}
