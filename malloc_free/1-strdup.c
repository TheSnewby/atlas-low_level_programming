#include "main.h"

/**
 * _strdup - allocates space in memory of a string
 * @str: string
 *
 * Return: pointer to memory, otherwise NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	char *str_copy = NULL;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++; /* functions as size of str */

	str_copy = malloc(sizeof(char) * i + 1);

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str_copy[i] = str[i];

	return (str_copy);
}
