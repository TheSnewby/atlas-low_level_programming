#include "lists.h"

/**
 * reverse_listint - reversses a listint_t linked list
 * @head: pointer to head
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = *head;
	listint_t *temp = *head;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return (*head);

	/* deal with first node */
	temp = (*head)->next;
	(*head)->next = NULL;
	*head = temp;

	/* deal with body of nodes */
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = temp;
	}

	(*head)->next = previous;
	/* deal with final node */

	return (*head);
}
