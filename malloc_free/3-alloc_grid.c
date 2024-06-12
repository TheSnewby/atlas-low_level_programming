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

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);

	for (row = 0; row < height; row++)
		grid[row] = malloc(height);

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
		for (column = 0; column < width; column++)
			grid[row][column] = 0;
	return (grid);
}
