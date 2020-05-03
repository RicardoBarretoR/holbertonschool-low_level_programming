#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: point to the head
 *@index: the index of the node, starting from 0
 *Return:  the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count;

	tmp = head;
	count = 0;
	while (tmp != NULL && count <= index)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
