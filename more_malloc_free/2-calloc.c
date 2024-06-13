#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: number of bytes per element
 *
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *str = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		str[i] = 0;

	return (str);
}
