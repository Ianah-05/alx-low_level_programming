#include <stdio.h>
/**
 * main - print lowercase alphabet except q and e
 *
 * Return: always 0
 *
 */
int main(void)
{
	char n = 97;

	while  (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
