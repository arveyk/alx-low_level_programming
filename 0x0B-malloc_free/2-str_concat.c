#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: Pointer to new allocated space, NULL if failed
 */
char *str_concat(char *s1, char *s2)
{

	char *concat = NULL;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int t_len = len1 + len2 + 1;
	int i;
	int y = 0;

	concat = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (!concat)
		return (NULL);

	if (s1 == NULL)
		strcpy(concat, s2);
	else
		if (s2 == NULL)
			strcpy(concat, s1);
		else
			for (i = 0; i < t_len; i++)
			{
				if (i < len1)
				{
					concat[i] = s1[i];
				}
				else
				{
					concat[i] = s2[y];
					y++;
				}
			}
	concat[t_len] = '\0';
	return (concat);
}
