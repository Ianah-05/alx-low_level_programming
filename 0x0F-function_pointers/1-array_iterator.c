#include "function_pointers.h"

/**
 * array_iterator - Prints each elements of an arrays
 * @array: array
 * @size: size of the array
 * @action: the pointer to the function to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *null = array + size - 1;

	if (array && size && action)
		while (array <= null)
			action(*array++);
}
