#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *rot13 - used rot-13 cipher to encrypt string
 *
 * Return: result of encryption
 * @y: pointer to string to be encrypted
 */
char *rot13(char *y)
{

	if (y == NULL)
	{
		return (NULL);
	}

	char *res = malloc(strlen(y));

	if (res != NULL)
	{
		strcpy(res, y);
		char *curr_char = res;

		while (*curr_char != '\0')
		{

		if ((*curr_char >= 97 && *curr_char <= 122) || (*curr_char >= 65 && *curr_char <= 90))
		{
			if (*curr_char > 109 || (*curr_char > 77 && *curr_char < 91))
				{
					*curr_char -= 13;
				}
			}
			else
			{
			*curr_char += 13;
			}
		}
		curr_char++;
	}
	return (res);

}
