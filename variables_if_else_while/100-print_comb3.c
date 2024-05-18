#include <stdio.h>

/**
 * main - prints all unique combo of two digits
 *
 * Return: 0
 */

int isinarray(int value, int array[]);
int swap(int value);

int main(void)
{
	int i, emptyindex = 0;
	int array[500]; /* tracks all values no longer unique */

	for (i = 1; i < 100; i++)
	{
		if (isinarray(i, array) == 1) /* i not in array */
		{
			if (i < 10)
			{
				array[emptyindex] = i;
				emptyindex++;
				array[emptyindex] = i * 10;
				emptyindex++;
				if (i == 1)
				{
					_putchar('0');
					_putchar('0' + i);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0');
					_putchar('0' + i);
				}
			} else
			{
				array[emptyindex] = i;
				emptyindex++;
				array[emptyindex] = swap(i);
				emptyindex++;

				_putchar(',');
				_putchar(' ');
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
		}


	}
	return (0);
}

/**
 * isinarray - checks whether a value is in an array
 * @value: 1st param
 * @array: 2nd param
 *
 * Return: 0 if true, 1 if false
 */

int isinarray(int value; int array[])
{
	

}

/**
 * swap - reverses values
 * @value: 1st param
 *
 * Return: reversed values
 */

int swap(int value)
{
	int a, b, ba;

	a = value / 10; /* tens digit */
	b = value % 10; /* ones digit */

	ba = b * 10 + a; /* reversed value */

	return (ba);
}
