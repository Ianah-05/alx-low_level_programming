#include <stdio.h>
/**
 * main - This will print alphabets in lowercase
 *
 * Return: always 0
 *
 */
int main(void)
{
	char n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
