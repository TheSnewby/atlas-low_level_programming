#include "main.h"

/**
 * alloc_grid - creates and returns a 2 dim array of ints
 * @width: width
 * @height: height
 *
 * Return: double pointer, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int row, column;
	int **grid = NULL;
	int failed = 0; /* 0 if malloc didn't fail */

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
			failed = 1;
	}

	if (failed != 0)
		{
			for (row = 0; row < height; row++)
				{
					free(grid[row]);
				}
			free(grid);
		}

	for (column = 0; column < width; column++)
		for (row = 0; row < height; row++)
			grid[row][column] = 0;
	return (grid);
}
