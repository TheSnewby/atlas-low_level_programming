#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: head of linked list
 *
 * Return: sum, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (sum);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
