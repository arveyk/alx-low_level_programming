#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{


	int n = 0;
	int m = 0;

	/*for (n = 0; n < 10; n++)
	{	
	
		putchar(n + '0);
		putchar(',');

		for (n = 0; n < 10; n++)
		{
			for (n = 0; n < 10; n++)
				
			{
			
				putchar(n + '0');

				putchar(',');
				putchar(' ');

			}
		
		}

			

	}*/
	while (n < 9)
	{
		while (m <= 9) 
		{
			putchar(n + '0');
			putchar(m + '0');
			m++;
			if (n <= 9)
			{
				putchar(',');
			}
		}
		m = n;
		n++;
	}
	putchar('\n');

	return (0);
}
