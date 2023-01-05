#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - prints the result of checking for palindrome
 *
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	int u = strlen(s), g, h;
	char **y;
	g = 0;
	h = 0;

       	y = s;
	
	return(is_palindrome(*y[u--] = s[g++]));
	
		if ((*y[h++] == s[h++]) != '\0')
			return (1);
	return (0);

}
