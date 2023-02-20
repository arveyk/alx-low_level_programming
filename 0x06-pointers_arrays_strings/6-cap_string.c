#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalizes the words of a string.
 *
 * Return: pointer to converted string
 * @ptr: pointer to string to be capitalized
 */
char *cap_string(char *ptr)
{

	int p;
	int len = strlen(ptr);

	if (ptr[0] >= 'a' && ptr[0] <= 'z')
		ptr[0] = ptr[0] - 32;
	for (p = 1; p < len; p++)
	{
		if (ptr[p - 1] == 32 || ptr[p - 1] == '\t' || ptr[p - 1] == '\n')
			if (ptr[p] >= 'a' && ptr[p] <= 'z')
				ptr[p] -= 32;
		if (ptr[p - 1] == '"' || ptr[p - 1] == ',' || ptr[p - 1] == '.')
			if (ptr[p] >= 'a' && ptr[p] <= 'z')
				ptr[p] -= 32;
		if (ptr[p - 1] == ')' || ptr[p - 1] == '{' || ptr[p - 1] == '}')
			if (ptr[p] >= 'a' && ptr[p] <= 'z')
				ptr[p] -= 32;
		if (ptr[p - 1] == '?' || ptr[p - 1] == '!' || ptr[p - 1] == ';')
			if (ptr[p] >= 'a' && ptr[p] <= 'z')
				ptr[p] -= 32;
		if (ptr[p - 1] == '(')
			if (ptr[p] >= 'a' && ptr[p] <= 'z')
				ptr[p] -= 32;
	}
	return (ptr);

}
