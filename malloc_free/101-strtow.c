#include "main.h"

/**
 * strtow - function splits a string into words
 * @str - string to be split
 *
 * Return: pointer to an array of strings, NULL otherwise
 */

char **strtow(char *str)
{
	int i, j, k;
	char *words[] = NULL;
	int space_num = 0;
	int *sizes = NULL;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ')
			space_num++;
	return (NULL);
}
