#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to convert
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, k, n, len, p, digit;

	i = 0;
	k = 0;
	n = 0;
	len = 0;
	p = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && p == 0)
	{
		if (s[i] == '-')
			++k;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (k % 2)
				digit = -digit;
			n = n * 10 + digit;
			p = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			p = 0;
		}
		i++;
	}

	if (p == 0)
		return (0);

	return (n);
}
