#include "lists.h"
/**
 *print_listint - prints all elements of a listint_t list
 *@h: pointer that point address of memory of head
 *Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t num_n = 0;

	while (h != 0)
	{
		if ((*h).n < 0)
			printf("(nil)\n");
		else
			printf("%d\n", h->n);

		h = (*h).next;
		num_n++;
	}
	return (num_n);
}
