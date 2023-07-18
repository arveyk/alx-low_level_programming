#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * ischar - checks if a charcter is printable
 * @cha: character to check
 *
 * Return: 1 on success, 0 on falure
 */
int ischar(char cha)
{
	if (cha >= 33 && cha <= 126)
		return (1);
	return (0);
}
/**
 * strtow - splits a sting into words
 * @str: string to be split
 *
 * Return: pointer to array of strings, NULL if str == NULL or "", or failure
 * occurs
 */
char **strtow(char *str)
{
	char **str_arr = NULL;
	char empty[] = "";
	int len;
	int in_wrd = 0;
	int elem_num = 0, posi_n;
	int i, m, z, p;

	if (str == NULL || *str == *empty)
		return (NULL);
	for (i = 0; str[i] != '\0' && str; i++)
	{
		if (str[i] == 32 || str[i] == '\t')
			in_wrd = 0;
		else if (in_wrd == 0)
		{
			in_wrd = 1;
			elem_num++;
		}
	}
	str_arr = malloc((elem_num + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	str_arr[elem_num] = NULL;
	m = 0;
	for (z = 0; z < elem_num && str[m] != '\0'; m++)
	{
		if (ischar(str[m]) == 1)
		{
			posi_n = m;
			for (len = 0; ischar(str[m]) == 1; len++, m++)
				;
			str_arr[z] = malloc((len + 1) * sizeof(**str_arr));
			if (!str_arr[z])
				return (NULL);
			str_arr[z][len] = '\0';
			p = 0;
			for (; p < len && str; p++, posi_n++)
			{
				str_arr[z][p] = str[posi_n];
			}
			z++;
		}
		else
			continue;
	}
	return (str_arr);
}
