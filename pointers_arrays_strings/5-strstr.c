#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int needle_length = 0;

	if (needle == "\0")
		return (NULL);

	for (i = 0; needle[i] != '\0'; i++) /* length of needle */
		needle_length++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
				else if (j == needle_length - 1)
					return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
