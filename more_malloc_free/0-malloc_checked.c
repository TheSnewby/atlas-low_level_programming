#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: void *
 */

void *malloc_checked(unsigned int b)
{
	void *array = NULL;

	if (b <= 0)
		return (NULL);

	array = malloc(b);

	if (array == NULL)
		exit(98);

	return (array);
}
