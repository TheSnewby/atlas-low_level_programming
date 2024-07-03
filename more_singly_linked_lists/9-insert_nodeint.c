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
	listint_t *temp = NULL;
	unsigned int count = 0;
	listint_t *new_node = NULL;

	if (head == NULL )
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (*head == NULL && idx == 0)
	{
		*head = new_node;
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	while (*head != NULL && count <= idx)
	{
		temp = *head;
		*head = (*head)->next;
	}

	if (count - 1 == idx && idx != 0)
	{
		new_node->n = n;
		temp->next = new_node;
		new_node->next = *head;
		return (new_node);
	}

	return (NULL);
}
