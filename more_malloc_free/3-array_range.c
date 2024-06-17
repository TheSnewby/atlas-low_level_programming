#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min amount initiated at 0
 * @max: max amount initiated at max length
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *arr = NULL;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
