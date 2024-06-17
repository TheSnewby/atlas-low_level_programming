#include "main.h"

/**
 * string_nconcat - concats two strings in a new memory alloc
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size = 0;
	unsigned int s2_size = 0;
	unsigned int i, j;
	char *s = NULL;
	unsigned int s_size = 0;

	if (s1 == NULL)
		s1_size = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			s1_size++;
	if (s2 == NULL)
		s2_size = 0;
	else
		for (i = 0; s2[i] != '\0'; i++)
			s2_size++;

	if (s2_size > n)
		s_size = s1_size + n + 1;
	else
		s_size = s1_size + s2_size + 1;
	s = malloc(s_size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		s[i] = s1[i];
	for (j = 0; j < s2_size && j < n; j++)
		s[s1_size + j] = s2[j];
	s[s1_size + j] = '\0';

	return (s);
}
