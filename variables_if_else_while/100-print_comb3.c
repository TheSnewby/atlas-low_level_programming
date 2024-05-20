#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "_putchar.c"

/**
 * main - prints all unique combo of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j,  emptyindex, inarray = 0; /* inarray = 0 if not in array */
	int tens, ones, swap; 
	int arraylength = 300;
	int array[300] = {0}; /* tracks all values no longer unique */

	for (i = 0; i < 100; i++)
	{
		swap = (i % 10 * 10) + (i / 10);

		if ((i / 10) == (i % 10))
			inarray = 1;

		for (j = 0; j <= arraylength && inarray == 0; j++)
		{
			if (i == array[j] || swap == array[j])
				inarray = 1;
		}

		if (inarray == 1)
		{
			inarray = 0;
			continue;
		}
		else
		{
			if (i < 10)
			{
				tens = 0;
				ones = i;
				swap = i * 10;
			} else
			{
				tens = i / 10;
				ones = i % 10;
			}
			
			array[emptyindex] = i;
			emptyindex++;
			array[emptyindex] = swap;
			emptyindex++;

			if (i > 1)
			{
				_putchar(',');
				_putchar(' ');
			}

			_putchar('0' + tens);
			_putchar('0' + ones);
		}
	}

	_putchar('\n');

	return (0);
}
