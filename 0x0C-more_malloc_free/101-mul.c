#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_num - prints a number using recursion
 * @m: number to be printed
 *
 * Return: no value
 */

void print_num(int m)
{
	if (m / 10)
		print_num(m / 10);
	_putchar((m % 10) + '0');
}

/**
 * main -finds the product of two numbers
 * @argc: counter of number of arguments from terminal
 * @argv: an array of pointers to arguments
 *
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
	long num1;
	long num2;
	long mul;
	char Err[] = "Error";
	size_t y = 0;

	if (argc != 3)
	{
		_putchar('\n');
		exit(98);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (!num1 || !num2 || num1 < 0 || num2 < 0)
		{
			while (Err != NULL)
			{
				_putchar(Err[y]);
				y++;
			}
			_putchar('\n');
			exit(98);

		}

	}

	mul = num1 * num2;

	print_num(mul);
	_putchar('\n');

	return (0);
}
