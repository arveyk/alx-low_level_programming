#include "main.h"

/**
 * *_strncpy - copies string
 *
 * Return: character copied
 * @dest: string to be copied from
 * @src: varible to hold string to be copied
 * @n: variable to use in iteration
 */
char *_strncpy(char *dest, char *src, int n)
{
	
/*	int e = 0;
	do 
	{
		dest[e] = src[e];
	       	e++;
	}while (e < n);

*/

int d = 0;

while (*src != '\0' && d < n)
{
	dest[d] = src[d];
	d++;
}
		
	return (dest);
}
