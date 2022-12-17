#include "main.h"

/**
 * main -find the largest prime factors of a large number
 *
 * Return: Always 0
 */
int main(void)
{

long int y = 1, k = 1, mod, prime;
	
	while (y < 612852475143)
	{	
		mod = 612852475143 % y;


			if (mod == 0)
		while (k != y )
		{
			prime = y % k;
		

			if (prime == 0)
			printf("%ld\n", prime);
		else 
			printf("\n");
			
		k += 1;
		}
		
			y++;
	}
	return (0);
}
