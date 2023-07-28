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

	if (!head)
		return;

	temp = head;
	while (temp)
	{
		temp = head->next;
		free(temp->str);
		free(temp);
		head = temp;
	}
}
