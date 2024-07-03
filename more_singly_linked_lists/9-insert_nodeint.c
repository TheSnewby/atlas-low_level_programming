#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to head of linked list
 * @idx: index where node should be added
 * @n: value to be inserted at new node
 *
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int count = 0;
	listint_t *new_node = NULL;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (*head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0) /* insert at beginning */
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL && count < idx - 1) /* iterate to find */
	{
		temp = temp->next;
		count++;
	}

	if (count < idx - 1 && temp == NULL) /* index not found */
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
