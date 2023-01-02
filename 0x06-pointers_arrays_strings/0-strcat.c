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

	int u;

	while (*dest++ != '\0')
	{
		u++;
	}

	while ((*dest++ = *src++)  != '\0')
		;
		return (dest);
}
