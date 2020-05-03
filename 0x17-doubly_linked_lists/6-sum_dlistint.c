#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data (n) of a linked list.
 *@head: point to the head
 *Return: the sum of all the data (n) otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		count++;
	}
	return (sum);
}
