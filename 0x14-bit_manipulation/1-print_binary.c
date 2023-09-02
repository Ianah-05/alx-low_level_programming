#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8, count = 0;

	while (i)
	{
		if (n & 1l << --i)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
