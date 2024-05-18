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
	int i;


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
