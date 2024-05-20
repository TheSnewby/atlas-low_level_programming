#include <stdio.h>

/**
 * main - print stuff
 *
 * Return: 0
 */

int main(void)
{
	int minustwo = 1;
	int minusone = 2;
	int current = 0;
	int evensum = minusone;

	while (current <= 4000000)
	{
		current = minustwo + minusone;
		minustwo = minusone;
		minusone = current;

		if (current % 2 == 0)
			evensum += current;
	}

	printf("%d\n", evensum);
	return(0);
}
