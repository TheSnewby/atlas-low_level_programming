#include "main.h"

/**
 * times_table - prints a formated 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, ij  = 0;

	for (; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			ij = i * j;

			if( j != 0) /* formats delimeters between numbers*/
                        {
				_putchar(',');
				_putchar(' ');
				if( ij / 10 % 10 == 0)
					_putchar(' ');
			}

			if( ij /10 % 10 == 0) /*if-else on formatting number output*/
			{
				_putchar('0' + ij);
			} else
			{
				_putchar('0' + (ij / 10 % 10));
				_putchar('0' + (ij % 10));
			}

			if ( j == 9) /*EOL*/
			{
				_putchar('\n');
			}
		}
	}
}
