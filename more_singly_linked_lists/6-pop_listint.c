#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: head of linked list
 *
 * Return: head node's data, or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
