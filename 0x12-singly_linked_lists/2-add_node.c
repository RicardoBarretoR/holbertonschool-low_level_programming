#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head: pointer that point at address of memory a date
 *@str: element of nodo
 *Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int cont = 0;
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	while (str[cont] != 0)
		cont++;
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = cont;
	new->next = *head;
	*head = new;
	if (new == 0)
	{
		return (0);
	}
	return (new);
	free(new);
}
