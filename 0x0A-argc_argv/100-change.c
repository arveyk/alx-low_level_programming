#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints is name to stdout
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int change = 0;
	int num = 0;
	int rem = 0;
	int rem1 = 0;
	int rem2 = 0;
	int count = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[count]);
		if (change < 0)
			printf("0\n");
		else
			switch (change)
			{
				case 25:
				case 10:
				case 5:
				case 2:
				case 1:
					num += 1;
					break;
				default:
					num += (change / 25);
					rem += change % 25;
					num += rem / 5;
					rem1 = rem % 5;
					num += rem1 / 2;
					rem2 = rem1 % 2;
					num += rem2;
					break;
			}
	}
	printf("%d\n", num);
	return (0);
}
