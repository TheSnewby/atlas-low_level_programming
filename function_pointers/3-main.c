#include "3-calc.h"

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

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][0] == '+' || argv[2][0] == '-' 
	|| argv[2][0] == '*'|| argv[2][0] == '/' || argv[2][0] == '%')
	{
		output = get_op_func(argv[2])(num1, num2);
		printf("%d\n", output);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (99);
	}

	/* consider if-thens for bad returns */
	printf("Error\n100\n");
	return (100);
	}
