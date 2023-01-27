#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{

	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
		z = -n % 10;
	else
		z = n % 10;

	if (z < 6 && z != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
	if (z > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, z);
	if (z == 0)
		printf("Last digit of %d is %d and is 0\n", n, z);


	return (0);
}
