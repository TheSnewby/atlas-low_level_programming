#include "main.h"
/**
 * is_palindrome_helper - recursively check a string for being a palindrome
 * @s: string
 * @size: length of string
 *
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome_helper(char *s, int size);
int is_palindrome(char *s);

int is_palindrome_helper(char *s, int size)
{
	if (size < 2)
		return (1);
	else
	{
		if (s[0] == s[size - 1])
			return(is_palindrome_helper(&s[1], size - 2));
		else
			return (0);
	}
}

/**
 * is_palindrome - check a string for being a palindrome
 * @s: string
 *
 * Return: 1 if a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int size = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		size++;
		i++;
	}

	if (size == 0)
		return (1);

	return(is_palindrome_helper(s, size));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
