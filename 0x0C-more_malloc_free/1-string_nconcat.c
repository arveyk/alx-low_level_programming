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
	size_t len = 0;
	size_t len_s1;
	size_t i;
	size_t j;
	char *combi = NULL;

	if (s1 == NULL && s2 == NULL)
	{
		combi = '\0';
		return (combi);
	}
	
	len += strlen(s1) + n;
	len_s1 = strlen(s1);
	combi = malloc(len * sizeof(char) + 2);

	if (combi == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		for (i = 0; i < n; )
		{
			combi[i] = s2[i];
			i++;
		}
		combi[i] = '\0';
	}
	else if (s2 == NULL)
	{
		len = strlen(s1);
		while (i < len_s1 && s1)
		{
		
			combi[i] = s1[i];
			i++;
		}
		combi[i] = '\0';
	}
	else 
	{
		while (s1 != NULL)
		{
			combi[i] = s1[i];
			i++;
		}
		i--;
		while (s2 && (i + j) < len)
		{
		
			combi[i + j] = s2[j];
			j++;
		}
		combi[i + j] = '\0';
	}
	return (combi);
}
