#include <stdio.h>

/**
 * main- prints the minimum number of coin to make change
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int f = 0;
	int r = atoi(argv[1]);

	int z = r % 25;
	int x = r % 10;
	int c = r % 5;
	int v = r % 2;
	int b = r % 1;
		
	if (r > 25)
		change += (r / 25);
		{
			if (z > 10)
			{
			
			if (z % 10 > 5)
			
			if ((z % 10) % 5 > 2)
			{
			
			if ((z % 10) % 5 % 2 > 1)
			
			{
			change += (r / 25 + ((r % 25) / 10) + (((r % 25) % 10) % 5) + ((((r % 25) % 10) % 5 ) % 2) + (((((r % 25) % 10) % 5) % 2)) % 1);
			else
			change += (r / 25 + ((r % 25) / 10) + (((r % 25) % 10) % 5) + ((((r % 25) % 10) % 5 ) % 2) + (((((r % 25) % 10) % 5) % 2)) % 1);
			}
			
			}

			else 
			change += (r / 25 + ((r % 25) / 10) + (((r % 25) % 10) % 5) + ((((r % 25) % 10) % 5 ) % 2) + (((((r % 25) % 10) % 5) % 2)) % 1);
			else 
			change += (r / 25 + ((r % 25) / 10) + (((r % 25) % 10) % 5) + ((((r % 25) % 10) % 5 ) % 2) + (((((r % 25) % 10) % 5) % 2)) % 1);

			}

			change += ((r / 5) + (r % 5) / 2) + (((r % 5) % 2) / 1);			
			else 	
			change += ((r / 5) + r % 5 / 2);
			}
		}
	else if (r > 5)
	{
		if (r % 5 > 2)
		{
			if ((r % 5) % 2 > 1)
			change += ((r / 5) + (r % 5) / 2) + (((r % 5) % 2) / 1);			
			else 
			change += ((r / 5) + r % 5 / 2);
		}

	}
	else if(r > 2)
	{
		change += ((r / 2) + r % 2);
	}
	else 
		change += (r / 1);

	
	printf("%d\n", change);


	return (0);
}
