#include "main.h"

/**
 * rev_string - reverses string
 *
 * Return: none
 * @ s: pointer to string to be reversed
 */
void rev_string(char *s)
{

	int q = sizeof(*s), z, a, count;
	char rev[q];

	while (q != '\0')
	{
		count++;
	z = count - 1;
	
		for (a = 0; a < count; a++)
		{
			rev = s[z];
			z--;
		}
	}

		rev[a] = '\n';
}
