#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: pointer to the first node
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
