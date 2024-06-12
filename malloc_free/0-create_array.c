#include "main.h"

/**
 * create_array - create an array of chars init with spec char
 * @size: size of array - 1
 * @c: specific char to be initialized
 *
 * Return: pointer to array, otherwase NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(sizeof(char) * size + 1);

	if (sizeof(array) == 0)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[size] = '\0';
	return (array);
}
