#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - checks the sign of a number
 *
 * Return: Always 0(Success)
 * @i: var whose number is to be tested
 */
void  positive_or_negative(int i)
{


	/* your code goes there */

	if (i == 0)
		printf("%d is zero\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	if (i > 0)
		printf("%d is positive\n", i);

}
