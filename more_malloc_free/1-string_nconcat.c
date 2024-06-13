#include "main.h"

/**
 * string_nconcat - concats two strings in a new memory alloc
 * s1: first string
 * s2: second string
 * n: number of bytes of second string
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_size = 0;
	int s2_size = 0;
	int i, j;
	char *s = NULL;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s1_size++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_size++;

	s = malloc(s1_size + s2_size + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		s[i] == s1[i];
	for (j = 0; j < s2_size; j++)
		s[s1_size + j] = s2[j];
	s[s1_size + j] = '\0';

	return (s);
}
