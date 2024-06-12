#include "main.h"

/**
 * create_array - create an array of chars init with spec char
 * @size: size of array
 * @c: specific char to be initialized
 *
 * Return: pointer to array, otherwase NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = NULL;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) + 1);

	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	array[size] = '\0';
	return (array);
}
