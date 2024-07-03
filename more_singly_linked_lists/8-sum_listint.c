#include "lists.h"

/**
 * sum_listint - sums all of the data (n) in a linked list
 * @head: head of linked list
 *
 * Return: sum, or 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
		return (sum);
	
	while (head != NULL)
	{
		temp = head;
		sum += temp->n;
		head = head->next;
	}
	return (sum);
}
