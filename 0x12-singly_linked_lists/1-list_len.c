#include "lists.h"
/**
 *list_len - returns the numbers of elements in a linked list_t list
 *@h: pointer that point at address of memory date
 *Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
