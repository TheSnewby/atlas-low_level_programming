#include "main.h"

/**
 * jack_bauer - prints time
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a,b,c,d = 0;
	int control = 0;
	
	for(;a<3 && control == 0;a++)
	{
		for(b = 0; b < 10 && control == 0; b++)
		{
			for(c = 0; c < 6 && control == 0; c++)
			{
				for(d = 0; d < 10 && control == 0; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');

					if (a == 2 && b == 3 && c == 5 && d == 9)
						control = 1;
				}
			}
		}
	}
}
