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

	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
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

	if (temp->next != NULL)
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	else
	{
		temp->prev->next = NULL;
	}
	free(temp);
	return (1);
}
