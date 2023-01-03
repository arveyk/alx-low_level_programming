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

	int h = 0;
	int k = 0;
	
	while (h++ <= 8)
	{
		while (*(a[h]+ k) != '\0')
		{
			_putchar(*(a[h] + k));
			k++;
		}
		_putchar('\n');
	}

}
