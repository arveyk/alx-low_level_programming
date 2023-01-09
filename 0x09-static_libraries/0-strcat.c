#include "main.h"
#include <string.h>
/**
 * *_strcat - combines two strings
 *
 * Return: combined string
 * @dest: pointer to 1st string.
 * @src: pointer to 2nd string.
 */
char *_strcat(char *dest, char *src)
{

	int g = 0;

	while (*dest++ != 0)
		g++;
	g -= 1;
	
		while (*src++  != '\0')
	{
		*(dest + g) = *src;
		g++;
	}
	
	return (dest);
}
