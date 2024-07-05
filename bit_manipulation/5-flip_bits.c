#include "main.h"

/**
 * flip_bits - counts bits requried to flip one number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sum = 0;
	int pmax = 63;
	int i;
	int n_dig;
	int m_dig;

	/* A ^ B returns 1 if different */
	for (i = pmax; i >= 0; i--)
	{
		if (n & (1UL << i))
			n_dig = 1;
		else
			n_dig = 0;
		if (m & (1UL << i))
			m_dig = 1;
		else
			m_dig = 0;
		if ((n_dig ^ m_dig) == 1)
			sum += 1;
	}
	return (sum);
}

int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}