#include "lists.h"

/**
 * free_listint - Frees a linked listint_t list
 * @head: pointer to the first node
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
