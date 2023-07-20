#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array
 * @size: size of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
