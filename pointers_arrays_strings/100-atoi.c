#include "main.h"

/**
 * _atoi - converts a string to an integer following almost indecipherable instructions
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i; /* iterator */
	int found = 0; /* boolean for whether number is found */
	int final_number = 0; /* boolean for being finished with number */
	int sign = 0; /* tracks pos and neg */
	int num = 0; /* returned number */
	//keep track of sign, find first number, find non number after number found

	for (i = 0; s[i] != '\0' && final_number == 0; i++)
	{
		if (s[i] == '+')
			sign++;
		else if (s[i] == '-')
			sign--;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found++; /* found is true */
			//write code to track numbers
			if (found == 1)
				num = s[i] - '0';
			else
				num = num * 10 + (s[i] - '0');
		}
		else
			if (found > 0)
			{
			       if (s[i] < '0' || s[i] > '9')
				       final_numbers = 1;
			}
	}
	if (sign < 0) 
		num = num * -1;
	return (num);
}
