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

	for (; *dest++ >= '\0'; )
	{
		*dest = *dest + *src;
		if (*dest == '\0')
			break;
	}
	return (0);
}
