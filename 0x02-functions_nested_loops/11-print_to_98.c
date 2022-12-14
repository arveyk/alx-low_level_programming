#include "main.h"

/**
 * print_to_98 - prints from given number up to 98
 *
 * Return: none
 * @n: the number to start from.
 */

void print_to_98(int n)
{
	if (n < 98)
		while (n <= 98)
			printf("%d, ", n++);
	else
		if (n > 98)
			while (n >= 98)
				printf("%d, ", n--);


}
