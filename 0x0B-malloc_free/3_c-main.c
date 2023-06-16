#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int, int);

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;
	int h;
	int w;

	h = 0;
	w = 0;
	grid = alloc_grid(h, w);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, h, w);
	printf("\n");
	return (0);
