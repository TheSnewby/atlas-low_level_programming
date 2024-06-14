#include "main.h"

/**
 * argstostr - concatenates all arguments of program
 * @ac: assuming argc
 * @av: assuming argv
 *
 * Return: pointer or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *str = NULL;
	int size = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}

	str = malloc(sizeof(char) * (size + ac));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (i != ac - 1)
		{
			str[k] = '\n';
			k++;
		}
	}

	str[k] = '\0';
	return (str);
}
