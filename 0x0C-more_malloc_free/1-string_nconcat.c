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

	char *s1_s2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		len_s1 = 0;
		s1 = "";
	}
	else
		len_s1 = strlen(s1);
	if (s2 == NULL)
	{
		len_s2 = 0;
		s2 = "";
	}
	else
		len_s2 = strlen(s2);
	len = len_s1 + len_s2 + 1;
	s1_s2 = malloc(sizeof(char) * len);
	for (i = 0; i < len_s1 && s1; i++)
		s1_s2[i] = s1[i];
	if (n >= len_s2)
	{
		for (j = 0; j < len_s2 && s2; j++)
			s1_s2[i + j] = s2[j];
	}
	else
		for (j = 0; j < n && s2; j++)
			s1_s2[i + j] = s2[j];
	s1_s2[len] = '0';
	return (s1_s2);

}
