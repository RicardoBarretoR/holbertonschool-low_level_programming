#include "lists.h"
/**
 *free_dlistint- free a dlistint_t list.
 *@head: point to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
