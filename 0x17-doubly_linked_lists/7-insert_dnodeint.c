#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: point to the head
 *@idx: index of the list where the new node should be added.
 *@n: date of the list
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *tmp1 = NULL, *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		tmp = *h;
		while (*h != NULL && count < idx)
		{
			if (count != 0)
			{
				if (tmp1 == NULL)
					tmp1 = *h;
				tmp1 = tmp1->next;
			}
			if (tmp->next != NULL)
			{
				tmp = tmp->next;
				count++;
			}
			else
				return (NULL);
		}
		new->n = n;
		tmp1->next = new;
		tmp->prev = new;
		new->next = tmp;
		new->prev = tmp1;
	}
	return (new);
}
