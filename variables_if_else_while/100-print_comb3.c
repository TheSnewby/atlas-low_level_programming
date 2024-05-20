#include <stdio.h>

/**
 * main - prints all unique combo of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j,  emptyindex, inarray = 0; /* inarray = 0 if not in array */
	int tens, ones, swap; 
	int arraylength = 200;
	int array[arraylength]; /* tracks all values no longer unique */

	for (i = 0; i < 100; i++)
	{
		swap = (i % 10 * 10) + (i / 10);
		
		for (j = 0; j <= arraylength; j++)
		{
			if (i == array[j] || swap == array[j])
				inarray = 1;
		}

		if (inarray == 1)
			continue;
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

			if (i != 0)
			{
				_putchar(",");
				_putchar(" ");
			}

			_putchar('0' + tens);
			_putchar('0' + ones);
		}

		inarray = 0;
	}

	_putchar("\n");
