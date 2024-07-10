#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		exit(0);

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
