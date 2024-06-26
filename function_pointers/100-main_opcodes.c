#include "function_pointers.h"
/**
 * main - prints opcodes of its own main function
 * @argc: num of arguments
 * @argv: num of bytes to be printed
 *
 * Return: 0, 1 if argc wrong, 2 if negative number of bytes
 */

int main(int argc, char **argv)
{
	int i, n;
	unsigned char *str = NULL;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n <= 0)
	{
		printf("Error\n");
		return (2);
	}
	/* converts main code to a string in its compiled form */
	str = (unsigned char *)main;
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", str[i]);
	}
	printf("\n");

	return (0);
}
