#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of value to change to 0
 *
 * Return: 1 if worked, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* ~ flips the mask from 0010000 to 1101111*/
	/* & is the only bit operator that changes all to 0 with 0 */
	*n = *n & ~(1 << index);

	return (1);
}
