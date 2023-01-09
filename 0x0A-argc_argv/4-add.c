#include <stdio.h>
#include <stdlib.h>

/**
 * main - sums arguments if they are numbers
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int add = 0, i;
	int u;

	if (argc == 0)
		printf("0\n");
	else 
	{
		for (i = 0; i <= argc - 1; i++)
		
		u = atoi(argv[i]);

		if (u < '0'|| u > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += u; 
			printf("%d\n", add);
		}	
	}
				
				return (0);
}
