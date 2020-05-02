#include "lists.h"
/**
 *dlistint_len - return the number of elements in a linked dlistint_t list
 *@h: pointer to head of the list
 *Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
