#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes copied
 *
 * Return: pointer to memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
