#include "lists.h"
/**
 *reverse_listint - reverses a listint_t linked list
 *@head: pointer that pointer at address memory of head
 *Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	current = NULL;
	prev = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;

	return (*head);
}
