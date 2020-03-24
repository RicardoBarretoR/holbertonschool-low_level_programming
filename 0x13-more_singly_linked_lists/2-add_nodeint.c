#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: pointer that point at address of memory of head
 *@n: data
 *Return:the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL || n < 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}