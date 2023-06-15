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
 * Return: pointer to new allocated space \
 * containing the string, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len;
	size_t len_s1;
	size_t i;
	size_t j;
	char *combi;

	if (s1 == NULL && s2 == NULL)
	{
		combi = "";
		return (combi);
	}
	len = strlen(s1) + n + 1;
	len_s1 = strlen(s1);
	combi = malloc(sizeof(char) * len);
	if (combi == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		for (i = 0; i < n; i++)
		{
			combi[i] = s2[i];
		}
		combi[i] = '\0';
	}
	else if (s2 == NULL)
	{
		for (i = 0; i < len_s1 && s1; i++)
		{
			combi[i] = s1[i];
		}
		combi[i] = '\0';
	}
	else
	{
		for (i = 0; s1 != NULL && i < len_s1; i++)
			combi[i] = s1[i];
		
	       	for (j = 0; s2 && j < n; j++)
			combi[i + j] = s2[j];
		combi[len] = '\0';
	}
	return (combi);
}
