#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - gets argument and operator
 * @s: operator passed
 * @a: argument 1
 * @b: argument 2
 * 
 * Return: pointer to function correspnding to operator passed to it
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
	int i = 0;

	while (ops->op != NULL)
	{
		if ((ops[i])->op == *s)
			return ();
		i++;
	}
	return (0);
}
