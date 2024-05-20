#include "main.h"
#include <unistd.h>

/**
 * times_table - prints a formated n times table
 * @n: param
 *
 * Return: void
 */

void print_times_table(int n)
{
        int i, j, ij  = 0;

        for (i = 0; i <= n; i++)
        {
                for (j = 0; j <= n; j++)
                {
                        ij = i * j;

                        if (j != 0) /* formats delimeters between numbers*/
                        {
                                _putchar(',');
                                _putchar(' ');
                                if (ij < 10) //ij / 10 % 10 == 0
                                        _putchar(' ');
				if (ij < 100)
					_putchar(' ');
                        }

                        if (ij < 10) /*if-else on formatting number output*/
                        {
                                _putchar('0' + ij);
                        } else if (ij < 100)
                        {
                                _putchar('0' + (ij / 10 % 10));
                                _putchar('0' + (ij % 10));
                        } else
			{
				_putchar('0' + (ij / 100 %10)); //hundreds place
				_putchar('0' + (ij / 10 % 10)); //tens place
                                _putchar('0' + (ij % 10)); //ones place
			}

                        if (j == n) /*EOL*/
                        {
                                _putchar('\n');
                        }
                }
        }
}
