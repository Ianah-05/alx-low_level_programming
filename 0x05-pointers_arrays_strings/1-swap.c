#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
