#include "main.h"
#include <stddef.h>
/**
 * print_chessboard - prints chessboard with letters representing chess pieces
 *
 * Return: void
 * a: row representing the array
 */
void print_chessboard(char (*a)[8])
{
	
	long unsigned int k = 0;
	long unsigned int u = 0;
	
	while (k++ <= 8) 
	{
		while (u++ <= 8)
		{	_putchar(*(*(a + k) + u));

		}
		_putchar('\n');
	}

}
