#include "lists.h"
/**
 *add_node_end - adds a new node at end of a list_t list
 *@head: pointer that point at address of memory
 *@str: string
 *Return: address of the new element, or NULL if it falied
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int cont;
	list_t *a, *new;

	if (str == NULL)
		return (NULL);
	new = (list_t *)malloc(sizeof(list_t));
	new->str = strdup(str);
	cont = 0;
	while (str[cont] != 0)
		cont++;
	new->len = cont;
	new->next = 0;
	if (new == 0)
	{
		return (0);
	}
	if (*head == 0)
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
	free(new);
}
