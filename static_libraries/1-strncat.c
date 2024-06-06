#include "main.h"

/**
 * _strncat - concatenates two string up to a point
 * @dest: target string to be added to
 * @src: string to be added
 * @n: up to number of bytes used in src
 *
 * Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	int srcsize = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[srcsize] != '\0')
	{
		srcsize++;
	}


	for (j = 0; src[j] != '\0' && j < n && j < srcsize; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
