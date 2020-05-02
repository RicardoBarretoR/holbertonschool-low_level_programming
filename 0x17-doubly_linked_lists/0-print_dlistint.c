#include "lists.h"
/**
 *print_dlistint - prints all the elements of dlistint_t list
 *@h: pointer to head the list
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("(nil)\n");
		else
			printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
