#include "main.h"

/**
 * free_grid - frees a 2 dim grid
 * @grid: 2 dim grid to be free
 * @height: number of pointers in grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
