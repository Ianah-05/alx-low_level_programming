#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: the bit to get
 * @n: the number to index
 *
 * Return: the value of bit at the index, or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8)
		return (-1);
	return (n >> index & 1);
}
