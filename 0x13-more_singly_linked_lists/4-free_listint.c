#include "lists.h"
/**
 *free_listint - frees a listint_t list
 *@head: pointer that point at address memory of head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
