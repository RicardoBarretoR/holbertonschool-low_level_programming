#include "lists.h"
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *@head: pointer to the head
 *@n: date
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == 0)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
		return (new);
	}
}
