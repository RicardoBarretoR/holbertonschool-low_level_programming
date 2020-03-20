#include "lists.h"
/**
 *size_t print_list - prints all the elements of a list_t list
 *@h: pointer that point at address of memory date
 *Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
	
