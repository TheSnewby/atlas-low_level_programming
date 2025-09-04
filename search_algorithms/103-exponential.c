#include "search_algos.h"

/**
 * print_arr - prints the values of an array within the index parameters,
 *  inclusive
 * @array: int array
 * @low: lower index
 * @high: upper index
 */
void print_arr(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}

/**
 * exponential_search - searches for a value in a sorted array of ints using
 *  the exponential search algorithm
 * @array: int array
 * @size: size of int array
 * @value: target value
 *
 * Return: index of target value, or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	int n = 1, low, high, mid;

	if (!array || !size)
		return (-1);

	if (array[0] == value)
		return (0);

	while ((n < (int)size) && (array[n]) < value)
	{
		printf("Value checked array[%d] = [%d]\n", n, array[n]);
		n *= 2;
	}

	low = n / 2;
	high = (n < (int)size) ? n : (int)(size - 1);

	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		print_arr(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
