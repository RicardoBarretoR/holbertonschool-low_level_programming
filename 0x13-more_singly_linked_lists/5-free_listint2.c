#include "lists.h"
/**
 *free_listint2 - frees a listint_t list
 *@head: double pointer that point at address of memory of head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
		*head = NULL;
	}
	head = NULL;
}
