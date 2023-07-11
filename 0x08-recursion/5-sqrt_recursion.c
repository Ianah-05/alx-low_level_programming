#include "main.h"

/**
 * _sqrt_recursion - Function that returs the natural square root of a number
 * @n: number to be squared
 *
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n); _sqrt_recursion(n - 1);
}
