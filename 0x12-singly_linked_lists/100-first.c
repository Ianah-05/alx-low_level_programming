#include "list.h"
#include <studio.h>

void _constructor(void) _attribute_((constructor));

/**
 * _constructor - Prints a sentence before the main function is executed
 *
 * Return: void
 */

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
