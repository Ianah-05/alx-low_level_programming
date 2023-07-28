#include "lists.h"
#include <stdio.h>

void first(void) _attribute_((constructor));

/**
 * first - Prints a sentence before executing the main function
 *
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
