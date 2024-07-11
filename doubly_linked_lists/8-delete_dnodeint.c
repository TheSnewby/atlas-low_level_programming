#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at an index of a dlinked list
 * @head: pointer to head of list
 * @index: index to be deleted
 *
 * Return: 1 if success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
