#include "main.h"

/**
 * set_string - sets the value of a pointer to a string
 *
 * Return: void.
 * @s: pointer to pointer of a string
 * @to: the char whose value is to be set
 */
void set_string(char **s, char *to)
{

	*s = &*to;
}
