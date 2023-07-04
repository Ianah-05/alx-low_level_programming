#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int p;

	while (s[counter] != '\0')
	counter++;
	for (p = 0; p < counter; p++)
	{
		counter--;
		rev = s[p];
		s[p] = s[counter];
		s[counter] = rev;
	}
}
