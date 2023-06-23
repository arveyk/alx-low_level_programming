#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - selects the correct function to execute
 * @s: pointer to operator to use
 *
 * Return: Pointer to function corresponding to the operator
 */
int (*get_op_func(char *s))(int a, int b)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((ops[i]).op != NULL && (strlen(s) == 1))
	{
		if (*s == *((ops[i]).op))
			return ((ops[i]).f);
		i++;
	}
	return (NULL);
}
