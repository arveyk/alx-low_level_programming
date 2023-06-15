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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1) + n + 1;
	len_s1 = strlen(s1);
	combi = malloc(sizeof(char) * len);
	if (combi == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && i < len_s1; i++)
		combi[i] = s1[i];
	for (j = 0; s2 && j < n; j++)
		combi[i + j] = s2[j];
	combi[len] = '\0';

	return (combi);
}
