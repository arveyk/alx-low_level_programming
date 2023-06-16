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
	{
		s1_s2 = malloc(sizeof(char) * 2);
		if (!s1_s2)
			return (NULL);
		s1_s2 = "";
		return (s1_s2);
	}
	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = strlen(s1);
	if (s2 == NULL)
		len_s2 = 0;
	else
		len_s2 = strlen(s1);
	len = len_s1 + len_s2 + 1;
	s1_s2 = malloc(sizeof(char) * len);


}	
