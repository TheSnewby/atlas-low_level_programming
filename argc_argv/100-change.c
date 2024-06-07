#include "main.h"

/**
 * main - prints min num of coins to make change for an amount of money
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: 0 unless error
 */

int main(int argc, char *argv[])
{
	int coin_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
	{
		while (cents / 25 >= 0)
		{
			coin_count += 1;
			cents -= 25;
		}

		while (cents / 10 >= 0)
		{
			coin_count += 1;
			cents -= 10;
		}

		while (cents / 5 >= 0)
		{
			coin_count += 1;
			cents -= 5;
		}

		while (cents / 1 >= 0)
		{
			coin_count += 1;
			cents -= 1;
		}

		printf("%d\n", coin_count);
	}
	return (0);
}
