#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints all unique combo of two digits
 *
 * Return: 0
 */

int _putchar(char c);

int main(void)
{
	int i, j,  emptyindex, inarray = 0; /* inarray = 0 if not in array */
	int tens, ones, swap; 
	int arraylength = 200;
	int array[200]; /* tracks all values no longer unique */
	memset(array, 0, sizeof(array));

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

	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
