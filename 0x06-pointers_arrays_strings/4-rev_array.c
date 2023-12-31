#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integer to be reversed
 * @n: The number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
