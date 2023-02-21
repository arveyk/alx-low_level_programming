#include "main.h"

/**
 * leet - encodes a string in leet code 1337
 * @ptr: pointer to string
 *
 * Return: pointer to encoded string
 */
char *leet(char *ptr)
{
	int y = 0;
	int p = 0;


	/* if ((ptr[y] >= 'a' && ptr[y] <= 'z') || (ptr[y] >= 'A' && ptr[y] <= 'Z'))  */
		for (; (ptr[y] >= 'a' && ptr[y] <= 'm') || (ptr[y] >= 'A' && ptr[y] <= 'Z');)
		{
			ptr[y] += 13;
			y++;
		}
		for (;( ptr[p] >= 'n' && ptr[p] <= 'z') || (ptr[p] >= 'N' && ptr[p] <= 'Z');)
		{
			ptr[p] -= 13;
			p++;
		}
	return (ptr);

}
