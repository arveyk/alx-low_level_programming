#include <stdio.h>
#include "main.h"

/**
 * print_leap_year - prints the remaing days in leap year
 * @month: month of the year
 * @day: day of the month
 * Return: void
 */
void print_leap_year(int month, int day)
{
	if (month == 2 && day == 60)
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Day of the year: %d\n", 1 + day);
		printf("Remaining days: %d\n", 366 - day - 1);
	}
}

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/


void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		print_leap_year(month, day);
	}

	else
	{
		if (year % 400 == 0)
		{
			print_leap_year(month, day);
		}
		else
		{
			if (month == 2 && day >= 60)
			{
				printf("Invalid date: %02d/%02d/%04d\n",
						month, day - 31, year);
			}
			else
			{
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}
	}
}
