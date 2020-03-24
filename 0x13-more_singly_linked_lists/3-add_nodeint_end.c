#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: pointer that point address memory of head
 *@n: data
 *Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *new;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = 0;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		a = *head;
		while (a->next != 0)
			a = a->next;
		a->next = new;
		return (new);
	}
}
