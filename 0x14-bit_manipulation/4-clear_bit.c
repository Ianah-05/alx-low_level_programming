#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @index: index of the bit
 * @n: pointer to the number
 *
 * Return: 1 if successful, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	if (*n & 1 << index)
		*n ^= 1 << index;
	return (1);
}
