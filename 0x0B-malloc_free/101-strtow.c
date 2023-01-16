#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 *
 * Return:NULL if str is equal to NULL or ""
 * return NULL if functin fails
 */
char **strtow(char *str)
{

	char spc = " ";
	int len = strlen(str);
	char **y = (char **)malloc(sizeof(char) * len);

	if (str == NULL || str == "")
		return (NULL);
	if (!y)
		return (NULL);

	y = strdup(str);

	y = strtok(str, " ");
	while (str != NULL)
	{
	
		y = strtok(NULL, " ");
	}
	
	return (y);

}
