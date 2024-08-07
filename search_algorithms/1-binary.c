#include "search_algos.h"

/**
 * binary_search - looks for a value in a sorted array using binary search
 * @array: array of integers
 * @size: size of array
 * @value: target value
 *
 * Return: index where array is located, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1, M;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		print_Array(array, L, R);
		M = (L + R) / 2;
		if (array[M] < value)
			L = M + 1;
		else if (array[M] > value)
			R = M - 1;
		else
			return (M);
	}
	return (-1);
}

/**
 * print_Array - prints integer array in specific format
 * @array: array of integers
 * @L: starting index to be printed
 * @R: ending index to be printed
 */
void print_Array(int *array, size_t L, size_t R)
{
	size_t i;

	printf("Searching in array: ");
	for (i = L; i <= R; i++)
	{
		if (i != L)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
