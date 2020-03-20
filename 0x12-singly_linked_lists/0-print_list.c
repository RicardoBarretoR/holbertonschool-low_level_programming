#include "lists.h"
/**
 *print_list - prints all the elements of a list_t list
 *@h: pointer that point at address of memory date
 *Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			_printf("[0] (nil)\n");
		else
			_printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
