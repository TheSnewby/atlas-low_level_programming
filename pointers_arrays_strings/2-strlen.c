/**
 * _strlen - returns the length of a string
 * s: c string?
 *
 * Return: int 
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		*s++;
	}

	return (count);
}
