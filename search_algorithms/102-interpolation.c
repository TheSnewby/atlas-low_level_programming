#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of ints using
 *  the interpolation search algorithm
 * @array: int array
 * @size: size of int array
 * @value: target value
 *
 * Return: index of target value, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	int needle, low = 0, high;

	if (!array || !size)
		return (-1);

	high = size - 1;

	while ((low != high) && (array[low] <= value) && (array[high] >= value))
	{
		needle = low + ((high - low) * (value - array[low]) /
		(array[high] - array[low]));

		if (array[needle] = value)
			return (needle);

		if (value < array[needle])
			high = needle;
		else
			low = needle + 1;
	}

	return (-1);
}
