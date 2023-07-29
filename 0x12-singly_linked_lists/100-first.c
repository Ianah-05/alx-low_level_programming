#include "lists.h"
#include <stdio.h>

void firstcome(void)__attribute__ ((constructor));

/**
 * firstcome - Prints a sentence before executing the main function
 *
 * Return: void
 */

void firstcome(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
