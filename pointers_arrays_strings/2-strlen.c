/**
 * _strlen - returns the length of a string
 * s: c string?
 *
 * Return: int 
 */

int _strlen(char *s)
{
	int count = 0;
	int index;

	for (index = 0; *s[index] != '\0'; index++)
		count++;	

	return (count);
}
