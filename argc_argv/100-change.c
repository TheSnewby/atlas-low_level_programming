#include "main.h"

/**
 * quaters - counts the quaters that goes into cents
 * @centsptr: cents pointer
 * @countptr: coin count pointer
 *
 * Return: count
 */
void quaters(int *centsptr, int *countptr)
{
	while (*centsptr >= 25)
	{
		countptr += 1;
		*centsptr -= 25;
		printf("reduced by 25\n");
	}
}

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
	int cents;
	int *centsptr = &cents;
	int *coin_countptr = &coin_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		quaters(centsptr, coin_countptr); /* for space */
		while (cents >= 10)
		{
			coin_count += 1;
			cents -= 10;
		}
		while (cents >= 5)
		{
			coin_count += 1;
			cents -= 5;
		}
		while (cents >= 2)
		{
			coin_count += 1;
			cents -= 2;
		}
		while (cents >= 1)
		{
			coin_count += 1;
			cents -= 1;
		}
		printf("%d\n", coin_count);
	}
	return (0);
}
