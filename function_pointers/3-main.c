#include "3-calc.h"


/**
 * is_digit - checks if all characters in a string a digits
 * @s: string
 *
 * return: 0 if true, otherwise -1
 */
int is_digit(char *s)
{
	int i, size;

	for (i = 0; s[i] != '\0'; i++)
		;
	size = i;
	for (i = 0; i < size; i++)
		if (s[i] < 48 || s[i] > 57)
			return (-1);
	return (0);
}
/**
 * main - accepts inputs and calls functions 
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 on success, 98 if argc wrong, 99 if wrong operator, 100 for / or % by 0
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int output;

	if (argc < 3 || argc > 3 || 
	is_digit(argv[1]) == -1 || is_digit(argv[3]) == -1)
		return (98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][0] == '+' || argv[2][0] == '-' 
	|| argv[2][0] == '*'|| argv[2][0] == '/' || argv[2][0] == '%')
	{
		output = get_op_func(argv[2])(num1, num2);
		printf("%d", output);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (99);
	}

	/* consider if-thens for bad returns */
	return (100);
	}
