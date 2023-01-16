#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - prints chessboard with letters representing chess pieces
 *
 * Return: void
 * a: row representing the array
 */
void print_chessboard(char (*a)[8])
{
	
	int k = 0;
	int u = 0;
	int len = strlen(a[8]);
	
	for (;k <= len; k++)
	{
		for (;u <= 8; u++)
		{
			_putchar(a[k][u]);
		}
		_putchar('\n');
	}

}
