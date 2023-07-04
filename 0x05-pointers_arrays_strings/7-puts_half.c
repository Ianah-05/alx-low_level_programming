#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int j, n, i;

	i = 0;

	for (j = 0; str[j] != '\0'; j++)
		i++;

	n = (i / 2);

	if ((i % 2) == 1)
		n = ((i + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
