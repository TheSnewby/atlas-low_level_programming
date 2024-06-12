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
	int i, j;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * width * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
