#include "lists.h"
/**
 *pop_listint - deleted the head node of a listint_t linked list
 *@head: double pointer to address memory of head
 *Return: head node´s data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*(*head)).next;
		n = (*temp).n;
		free(temp);
		return (n);
	}
	return (0);
}
