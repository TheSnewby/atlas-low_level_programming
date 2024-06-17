#include "main.h"

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer
 * @old_size: current size of pointer's block
 * @new_size: desired new size of pointer's block
 *
 * Return: pointer, NULL otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int n;
	char *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 & ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;
	else
		n = new_size;
	memset(new_ptr, ptr, n);

	free(ptr);
	return (new_ptr);
}
