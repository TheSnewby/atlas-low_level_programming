#include "search_algos.h"

/**
 * linear_search - finds first index of a value in an array using linear search
 * @array: array of integers
 * @size: size of array
 * @value: target of search
 *
 * Return: index of value or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
