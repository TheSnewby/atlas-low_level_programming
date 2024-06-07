#include "main.h"

/**
 * is_prime_number_helper - helper function
 * @i: 6k +- 1
 * @n: value being checked for primality
 *
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number_helper(int i, int n)
{
	if (n % (i - 1) == 0 || n % (i + 1) == 0)
		return (1);
	else if (i > (n / 2))
		return (0);
	return (is_prime_number_helper(i + 6, n));
}

/**
 * is_prime_number - prime number indicator
 * @n: number
 *
 * Return: 1 if prime, otherwise 0 if false
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_prime_number_helper(6, n));
}
