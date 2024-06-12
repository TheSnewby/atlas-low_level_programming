#include "main.h"

/**
 * str_concat - concatenates two strings to new space
 * @s1: string being concatenated to
 * @s2: string being concatenated
 *
 * Return: pointer to new space
 */

char *str_concat(char *s1, char *s2)
{
	int size_s1 = 0;
	int size_s2 = 0;
	int i = 0;
	char *str = NULL;

	/*  if (s1 == NULL || s2 == NULL)
		return (NULL); */

	for (i = 0; s1[i] != '\0'; i++)
		size_s1++;
	for (i = 0; s2[i] != '\0'; i++)
		size_s2++;
	str = malloc(size_s1 + size_s2 + 1);
	for (i = 0; i < size_s1; i++)
		str[i] = s1[i];
	for (; i < size_s1 + size_s2; i++)
		str[i] = s2[i - size_s1];
	if (str == NULL)
		return (NULL);
	str[size_s1 + size_s2] = '\0';
	return (str);
}
