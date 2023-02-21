#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *rot13 - used rot-13 cipher to encrypt string
 *
 * Return: result of encryption
 * @x: pointer to string to be encrypted
 */
char *rot13(char *x)
{
	char *y = x;
	int b = 0;


		while (y[b++] != '\0')
		{
				if ((y[b] >= 'a' && y[b] <= 'm') || (y[b] >= 'A' && y[b] <= 'M'))
					y[b] += 13;
		
		}
		
		for (b = 0;(y[b] >= 'n' && y[b] <= 'Z') || (y[b] >= 'N' && y[b] <= 'Z');)
		{
			y[b] -= 13;
			b++;
		}
	return (y);

}
