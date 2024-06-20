#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: int array
 * @size: size of array
 * @action: placeholder for passed function with int parameter
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size <= 0)
		;
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
