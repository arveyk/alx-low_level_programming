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
	int left = 0;
	int right = strlen(s);

	if (NULL == s || left < 0 || right < 0)
		return (0);
	
	if (left >= right)
		return (0);

	if (s[0] == s[right])
	{
		return (is_palindrome(s));
		left++;
		right--;
	}
	
				
	return (0);

}
