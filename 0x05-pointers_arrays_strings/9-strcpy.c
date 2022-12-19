#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string including the null character
 *
 * Return: pointer to dest
 * @dest: pointer to variable to be written to
 * @src: string to be copied
 */
char *_strcpy(char *dest, char *src)
{

char *ptr = dest;
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	return (ptr);
}
