#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 *
 * Return: none
 * @ s: pointer to string to be reversed
 */
void rev_string(char *s)
{

	char y [strlen(s)]= *s;
	int l, t, r;

	for (l = 0, t = strlen(s) - 1; l < t; l++, t++)
	{
	
		r =  y[l];
		y[l] = y[t];
		y[t] = r;
	}
	

}
