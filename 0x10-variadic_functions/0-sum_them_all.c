#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - evaluates the sum of numbers passed to it
 * @n: number of digits to be added
 *
 * Return: sum if successful, 0 if n is zero
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int u;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (u = 0; u < n; u++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
