#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes char to stdout
 * @c: Character to be printed
 *
 * Return: 1. on success
 * On error, return -1, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
