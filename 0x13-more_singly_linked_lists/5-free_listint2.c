#include "lists.h"
/**
 *free_listint2 - frees a listint_t list
 *@head: double pointer that point at address of memory of head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *a;

	if (*head == NULL)
		return;

	a = *head;
	while (a->next != NULL)
	{
		tmp = a;
		a = tmp->next;
		free(tmp);
	}
	free(a);
	*head = NULL;
}
