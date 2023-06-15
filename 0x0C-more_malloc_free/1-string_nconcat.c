#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: 2nd string
 * @n: number of stings to copy from 2nd string
 *
 * Return: pointer to new allocated space\
 * containing the string, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len;
	size_t len_s1;
	size_t len_s2;
	size_t i;
	size_t j;
	char *space = "";
	char *combi;
	char *str_2;

	if (s1 == NULL)
	{
		len_s2 = strlen(s2);
		str_2 = malloc(sizeof(char) * (len_s2 + 2));
		if (!str_2)
			return (NULL);
		str_2[0] = *space;
		if (n >= len_s2)
		{
			for (i = 1; i < len_s2 + 1; i++)
				str_2[i] = s2[i];
			str_2[i] = '\0';
		}
		else 
		{
			for (i = 0; i < n; i++)
				str_2[i] = s2[i];
			str_2[i] = '\0';
		}
		return (str_2);
	}
	if (s2 == NULL)
	{
		len_s1 = strlen(s1);
		str_2 = malloc(sizeof(char) * (len_s1 + 2));
		if (!str_2)
			return (NULL);
		for (i = 0; i < len_s1; i++)
			str_2[i] = s1[i];
		str_2[i] = *space;
		str_2[i + 1] = '\0';
		return (str_2);
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	len = strlen(s1) + n + 1;
	combi = malloc(sizeof(char) * len);
	if (combi == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && i < len_s1; i++)
		combi[i] = s1[i];
	if (n < len_s2)
	{
		for (j = 0; s2 && j < n; j++)
			combi[i + j] = s2[j];
		combi[i + j] = '\0';
	}
	else 
	{
		for (j = 0; s2 && j < len_s2; j++)
			combi[i + j] = s2[j];
		combi[i + j] = '\0';
	}
	return (combi);
}
