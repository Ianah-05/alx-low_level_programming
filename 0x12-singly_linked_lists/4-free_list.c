#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a list_t list
* @head: List_t list to be freed
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
