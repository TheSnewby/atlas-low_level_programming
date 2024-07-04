#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at an index of a linked list
 * @head: pointer to head of linked list
 * @index: locaiton of node to be deleted
 *
 * Return: 1 if succeeds, -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *before;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index -1)
	{
		before = temp;
		temp = temp->next;
		count++;
	}

	if (temp == NULL && count < index - 1)
		return (-1);

	before->next = temp -> next;
	free(temp);
	return (1);
}
