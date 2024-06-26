#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: size of int array
 * @cmp: function pointer with int parameter
 *
 * Return: index of first element where cmp != 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
