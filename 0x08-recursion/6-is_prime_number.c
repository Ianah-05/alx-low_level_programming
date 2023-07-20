#include "main.h"

/**
 * is_prime_number - Inputs the integer of a prime number
 * @n: prime number
 *
 * Return: 1 if n is a prime number, if not 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_number(n, n - 1));
}
