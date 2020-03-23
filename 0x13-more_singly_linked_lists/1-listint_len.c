#include "lists.h"
/**
 *listint_len - return the number of elements in a linked listint_t list
 *@h: pointer that point address memory of head
 *Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t num_n = 0;

	while (h != '\0')
	{
		h = (*h).next;
		num_n++;
	}
	return (num_n);
}
