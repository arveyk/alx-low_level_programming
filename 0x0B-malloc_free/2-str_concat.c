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
	int len1 = 0, len2 = 0;
	int t_len, i, y = 0;

	if (s1)
		len1 = strlen(s1);
	if (s2)
		len2 = strlen(s2);
	t_len = len1 + len2 + 1;
	if (t_len > 1)
	{
		concat = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
		if (!concat)
			return (NULL);
		concat[t_len - 1] = '\0';
	}
	else
	{
		concat = (char *)malloc(sizeof(char) * 1);
		if (!concat)
			return (NULL);
		concat[0] = '\0';
		return (concat);
	}
	if (s1 == NULL && s2)
		strcpy(concat, s2);
	else if (s2 == NULL && s1)
		strcpy(concat, s1);
	else
		for (i = 0; i < t_len; i++)
		{
			if (s1[i] && i < len1)
				concat[i] = s1[i];
			else
				concat[i] = s2[y++];
			if (!s2[y])
				break;
		}
	return (concat);
}
