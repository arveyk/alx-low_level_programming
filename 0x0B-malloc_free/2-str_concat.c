#include "main.h"
#include <stdlib.h>

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

	char *q, *w;
	int g;
	int len = 0;
	int set = 0;


	if (*s1 == '\0' || *s2 == '\0')
		return (NULL);
	for (g = 0; s1[g] != '\0'; g++)
	{
		len++;
		set++;
	}
	q = malloc(sizeof(char) * len);

	if (!q)
		return (NULL);

	for (g = 0; s1[g] != '\0'; g++)
		q[g] = s1[g];

	for (g = 0; s2[g] != '\0'; g++)
		len++;

	w = realloc(q, (len * sizeof(char)));

	if (!w)
		return (NULL);

	for (g = 0; s2[g] != '\0'; g++)
		w[set++] = s2[g];

	w[len] = '\0';

	return (w);

}
