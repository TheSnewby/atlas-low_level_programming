#include "main.h"

/**
 * strtow - function splits a string into words
 * @str - string to be split
 *
 * Return: pointer to an array of strings, NULL otherwise
 */

char **strtow(char *str)
{
	int i;
	char **words = NULL;
	int count = 0;
	int *sizes = NULL;
	int word = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++) /* word count */
	{
		if (str[i] == ' ')
		{
			if (i != 0)
				continue;
			else if (str[i-1] != ' ')
			{
				count++;
			}
		}
	}

	sizes = malloc(sizeof(int) * count); 
	if (sizes == NULL)
		return (NULL);

	count = 0;
	for (i = 0; str[i] != '\0'; i++) /* letter count each word */
	{
		if (i == 0 && str[i] == ' ')
		{
			continue;
		}
		else if (str[i] != ' ')
		{
			count++;
		}
		else if (str[i] == ' ' && )
			
	}

	return (words);
}
