#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @index: index of the bit
 * @n: pointer to the number of string
 *
 * Return: 1 if successful, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 8)
		return (-1);
	num = 1;
	num = num << index;
	*n = ((*n) | num);
	return (1);
}
