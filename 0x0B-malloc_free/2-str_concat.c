#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -concatenates two strings
 *
 * Return: pointer to the newlly allocated space containing
 * concateneted string
 * NULL on failure
 * @s1: first string
 * @s2: second string
 */
char *str_concat(char *s1, char *s2)
{

	char *q;
	int g;

	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int set = len1 + len2 + 1;


	if (*s1 == '\0' || *s2 == '\0' || len1 == 0 || len2 == 0)
		return (NULL);

	q = malloc(sizeof(char) * set);

	if (!q)
		return (NULL);

	for (g = 0; s1[g] != '\0'; g++)
		q[g] = s1[g];


	for (g = 0; s2[g] != '\0'; g++)
		q[len1 + g] = s2[g];


	q[set - 1] = '\0';

	return (q);

}
